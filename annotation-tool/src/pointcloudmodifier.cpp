#include "pointcloudmodifier.h"
#include <pcl/point_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/filters/project_inliers.h>
#include <pcl/common/transforms.h>
#include <pcl/common/angles.h>
#include <pcl/filters/passthrough.h>
#include <pcl/kdtree/kdtree.h>
#include <pcl/filters/extract_indices.h>


#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/sample_consensus/ransac.h>
#include <pcl/segmentation/extract_polygonal_prism_data.h>
#include <math.h>
#include <pcl/segmentation/extract_clusters.h>
#include <pcl/surface/convex_hull.h>


pointCloudModifier::pointCloudModifier():
    _planeCoefficients (new pcl::ModelCoefficients)
{
}


 void pointCloudModifier::automaticTableDetection(pcl::PointCloud<pointT>::Ptr cloud_in,
                                                 pcl::PointCloud<pointT>::Ptr cloud_out){

     printf("%u points found\n original", cloud_in->size());

             pcl::PointCloud<pointT>::Ptr cloudProjected (new pcl::PointCloud<pointT>);
             pcl::PointCloud<pointT>::Ptr cloudProjected_1 (new pcl::PointCloud<pointT>);
             pcl::PointCloud<pointT>::Ptr cloudProjected_2 (new pcl::PointCloud<pointT>);

             // Create the segmentation object
             pcl::PointIndices::Ptr inliers (new pcl::PointIndices);
             pcl::SACSegmentation<pointT> seg;
             seg.setOptimizeCoefficients (true);
             seg.setModelType (pcl::SACMODEL_PLANE);
             seg.setMethodType (pcl::SAC_RANSAC);
            // seg.setMaxIterations (10);
             seg.setDistanceThreshold (0.01);

             // Stores the coefficents to the plane (a * x + b * y + c * z = d)
             seg.setInputCloud (cloud_in);
             seg.segment (*inliers, *_planeCoefficients);



             printf("%u points found\n", inliers->indices.size());


             // Indices extractor object
                     pcl::ExtractIndices<pointT> extract;

                     // Extract the inliers
                     extract.setInputCloud (cloud_in);
                     extract.setIndices (inliers);
                     extract.setNegative (true);
                     extract.filter (*cloudProjected_1);

                     printf("%u points found\n after", cloudProjected_1->size());




                   // Stores the coefficents to the plane (a * x + b * y + c * z = d)
                     seg.setInputCloud (cloudProjected_1);
                     seg.segment (*inliers, *_planeCoefficients);

                     printf("%u points found\n", inliers->indices.size());


                     // Indices extractor object
                             pcl::ExtractIndices<pointT> extract_2;

                             // Extract the inliers
                             extract_2.setInputCloud (cloudProjected_1);
                             extract_2.setIndices (inliers);
                             extract_2.setNegative (true);
                             extract_2.filter (*cloudProjected_2);

                             printf("%u points found\n after", cloudProjected_2->size());


                             seg.setInputCloud (cloudProjected_2);
                             seg.segment (*inliers, *_planeCoefficients);

                             printf("%u points found\n", inliers->indices.size());


                             // Indices extractor object
                                     pcl::ExtractIndices<pointT> extract_3;

                                     // Extract the inliers
                                     extract_3.setInputCloud (cloudProjected_2);
                                     extract_3.setIndices (inliers);
                                     extract_3.setNegative (true);
                                     extract_3.filter (*cloudProjected);

                                     printf("%u points found\n after", cloudProjected->size());




   pcl::ProjectInliers<pointT> proj;
    proj.setModelType (pcl::SACMODEL_PLANE);
    proj.setIndices (inliers);
    proj.setInputCloud (cloud_in);
    proj.setModelCoefficients (_planeCoefficients);
    proj.filter (*cloudProjected);



    // Move the coordenate system of the point cloud to the table plane

    // 1st - Set the translation to the center of the plane negated
    Eigen::Vector3f cloud_plane_center_negated(0,0,0);

    for (size_t i = 0; i < cloudProjected->points.size(); ++i)
    {
        cloud_plane_center_negated[0] -= cloudProjected->points[i].x/cloudProjected->points.size();
        cloud_plane_center_negated[1] -= cloudProjected->points[i].y/cloudProjected->points.size();
        cloud_plane_center_negated[2] -= cloudProjected->points[i].z/cloudProjected->points.size();
    }

    Eigen::Translation3f translation((Eigen::Vector3f)(cloud_plane_center_negated));

    // 2nd - Find the rotation
    Eigen::Vector3f normal_vector(
                _planeCoefficients->values[0],
                _planeCoefficients->values[1],
                _planeCoefficients->values[2]);

    Eigen::Vector3f z_vector(0,0,1);
    Eigen::Vector3f k_vector = normal_vector.cross(z_vector);
    k_vector.normalize();

    float angle = acos(normal_vector.dot(z_vector));

    Eigen::Affine3f rotation = (Eigen::Affine3f)Eigen::AngleAxisf(angle, k_vector);

    // 3rd - Calculate the final transformation
    Eigen::Affine3f total_transformation = rotation*translation;

    // 4th - Transform the point cloud
    pcl::transformPointCloud(
                *cloud_in,
                *cloud_out,
                (Eigen::Affine3f)total_transformation);
}






void pointCloudModifier::manualTableDetection(pcl::PointCloud<pointT>::Ptr cloud_in,
                                              pcl::PointCloud<pointT>::Ptr cloud_out,
                                              std::vector<pointT> &points){
    // Compute the plane coefficients given 3 points
    computePlaneCoefficients(points);

    // Move the coordenate system of the point cloud to the table plane

    // 1st - Set the translation to the first picked point
    Eigen::Vector3f point_on_plane_negated(-points[0].x, -points[0].y, -points[0].z);
    Eigen::Translation3f translate((Eigen::Vector3f)(point_on_plane_negated));

    // 2nd - Find the rotation
    Eigen::Vector3f normal_vector(
                _planeCoefficients->values[0],
                _planeCoefficients->values[1],
                _planeCoefficients->values[2]);

    Eigen::Vector3f z_vector(0,0,1);
    Eigen::Vector3f k_vector = normal_vector.cross(z_vector);
    k_vector.normalize();
    float angle = acos(normal_vector.dot(z_vector));
    Eigen::Affine3f rotate = (Eigen::Affine3f)Eigen::AngleAxisf(angle, k_vector);

    // 3rd - Calculate the final transformation
    Eigen::Affine3f total_transformation = rotate*translate;

    // 4th - Transform the point cloud
    pcl::transformPointCloud(
                *cloud_in,
                *cloud_out,
                (Eigen::Affine3f)total_transformation);
}


void pointCloudModifier::computePlaneCoefficients(std::vector<pointT> &points){
    // The three picked points
    Eigen::Array4f p0(points[0].x, points[0].y, points[0].z, 1);
    Eigen::Array4f p1(points[1].x, points[1].y, points[1].z, 1);
    Eigen::Array4f p2(points[2].x, points[2].y, points[2].z, 1);

    // Compute the segment values (in 3d) between p1 and p0
    Eigen::Array4f p1p0 = p1 - p0;
    // Compute the segment values (in 3d) between p2 and p0
    Eigen::Array4f p2p0 = p2 - p0;

    // Compute the plane coefficients from the 3 given points in a straightforward manner
    // calculate the plane normal n = (p2-p1) x (p3-p1) = cross (p2-p1, p3-p1)
    Eigen::VectorXf model_coefficients;
    model_coefficients.resize(4);
    model_coefficients[0] = p1p0[1] * p2p0[2] - p1p0[2] * p2p0[1];
    model_coefficients[1] = p1p0[2] * p2p0[0] - p1p0[0] * p2p0[2];
    model_coefficients[2] = p1p0[0] * p2p0[1] - p1p0[1] * p2p0[0];
    model_coefficients[3] = 0;

    // Normalize
    model_coefficients.normalize ();

    // ... + d = 0
    model_coefficients[3] = -1 * (model_coefficients.dot (p0.matrix ()));

    // Clear the plane coefficients in case that has been used before
    _planeCoefficients->values.clear();
    _planeCoefficients->values.resize(4);

    // Store the values
    _planeCoefficients->values[0] = model_coefficients[0];
    _planeCoefficients->values[1] = model_coefficients[1];
    _planeCoefficients->values[2] = model_coefficients[2];
    _planeCoefficients->values[3] = model_coefficients[3];

}


void pointCloudModifier::filter_axis(pcl::PointCloud<pointT>::Ptr cloud_in,
                                     pcl::PointCloud<pointT>::Ptr cloud_out,
                                     std::string axis,
                                     float min,
                                     float max){
    // Passthrough filter
    pcl::PassThrough<pointT> pass;
    pass.setInputCloud (cloud_in);
    pass.setFilterFieldName (axis);
    pass.setFilterLimits (min, max);
    pass.filter (*cloud_out);

}


void pointCloudModifier::translate_on_plane_x_y(pcl::PointCloud<pointT>::Ptr cloud_in,
                                                pcl::PointCloud<pointT>::Ptr cloud_out,
                                                pointT dest){

    Eigen::Affine3f rotate = (Eigen::Affine3f)Eigen::Affine3f::Identity();
    Eigen::Translation3f translate (-dest.x, -dest.y, 0);
    Eigen::Affine3f total_transformation = rotate*translate;
    pcl::transformPointCloud(
                *cloud_in,
                *cloud_out,
                (Eigen::Affine3f)total_transformation);
}


void pointCloudModifier::align_x_with_edge(pcl::PointCloud<pointT>::Ptr cloud_in,
                                           pcl::PointCloud<pointT>::Ptr cloud_out,
                                           pointT corner){

    Eigen::Vector4f x_axis(1,0,0,0);
    Eigen::Vector4f vector_OP(corner.x, corner.y, 0, 0);
    float angle =	pcl::getAngle3D (x_axis, vector_OP);
    if (corner.y>0){
        angle = 2*M_PI-angle;
    }
    Eigen::Affine3f transformation = pcl::getTransformation (0.0, 0.0, 0.0, 0.0, 0.0, angle);

    pcl::transformPointCloud(
                *cloud_in,
                *cloud_out,
                transformation);
}


void pointCloudModifier::rotate_z_180(pcl::PointCloud<pointT>::Ptr cloud_in,
                                      pcl::PointCloud<pointT>::Ptr cloud_out){

    Eigen::Affine3f transformation = pcl::getTransformation (0.0, 0.0, 0.0, M_PI, 0.0, 0.0);
    pcl::transformPointCloud(
                *cloud_in,
                *cloud_out,
                transformation);
}

