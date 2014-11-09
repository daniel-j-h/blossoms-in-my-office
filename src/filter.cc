#include <algorithm>
#include <opencv2/imgproc/imgproc.hpp>
#include "filter.h"

namespace blossoms {

void filter(const cv::Mat& in, cv::Mat& out) {
  // color segmentation in hsv color space for robustness
  cv::cvtColor(in, out, CV_BGR2HSV);

  // red'ish: ~35° left and right of 0° hue; opencv maps values to 8bit (and only uses [0, 179])
  cv::Mat lhs, rhs;
  cv::inRange(out, cv::Scalar{0, 150, 45}, cv::Scalar{17, 255, 255}, lhs);
  cv::inRange(out, cv::Scalar{162, 150, 45}, cv::Scalar{255, 255, 255}, rhs);

  // we want both filtered ranges combined
  cv::bitwise_or(lhs, rhs, out);

  // determine kernel size based on image
  const double scale{0.01};
  const auto delta = static_cast<int>((std::min)(in.cols, in.rows) * scale);

  const auto struc = cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size{delta, delta});

  cv::morphologyEx(out, out, cv::MORPH_OPEN, struc);
}
}
