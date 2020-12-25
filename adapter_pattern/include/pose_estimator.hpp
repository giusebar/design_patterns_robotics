// "pose_estimator.hpp"

#ifndef POSE_ESTIMATOR_HPP
#define POSE_ESTIMATOR_HPP

#include <iostream>
#include <string>
#include "adapter_class.hpp"

class PoseEstimator
{
  public:
    PoseEstimator(BinaryCameraDriver* binary_camera);
    ~PoseEstimator();

    void estimate_object_pose();
  private:
    BinaryCameraDriver* binary_camera;
};

#endif // POSE_ESTIMATOR_HPP
