#include <vector>
#include <opencv2/imgproc/imgproc.hpp>
#include "contours.h"

namespace blossoms {

void contours(const cv::Mat& in, cv::Mat& out) {
  std::vector<std::vector<cv::Point>> contours;
  std::vector<cv::Vec4i> hierarchy;

  cv::findContours(in, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_SIMPLE);
  cv::drawContours(out, contours, -1, {255, 255, 255}, CV_FILLED, CV_AA, hierarchy);
}
}
