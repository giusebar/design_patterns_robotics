#include "pose_estimator.hpp"

PoseEstimator::PoseEstimator(BinaryCameraDriver* binary_camera)
    : binary_camera(binary_camera)
{};

PoseEstimator::~PoseEstimator()
{};

void PoseEstimator::estimate_object_pose()
{
  std::string data = binary_camera->transmit_point_cloud_data();
  std::cout<<"Estimating object pose from point data format: "<<data<<"\n";
}

int main()
{
  BinaryCameraDriver* binary_camera = new BinaryCameraDriver();
  
  PoseEstimator pose_estimator = PoseEstimator(binary_camera);
  pose_estimator.estimate_object_pose();

  AsciiCameraDriver* ascii_camera = new AsciiCameraDriver();
  CameraBinaryAdapter* binary_adapted_ascii_camera = new CameraBinaryAdapter(ascii_camera);

  PoseEstimator pose_estimator_2 = PoseEstimator(binary_adapted_ascii_camera);
  pose_estimator_2.estimate_object_pose();
}