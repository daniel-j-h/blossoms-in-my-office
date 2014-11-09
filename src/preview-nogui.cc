#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include "preview.h"

namespace blossoms {

void preview(const std::string&, const cv::Mat& img) {
  const auto nz = cv::countNonZero(img);
  const auto perc = static_cast<double>(nz) / (img.rows * img.cols);

  // percentage of red'ish blossoms in image as integer
  std::cout << static_cast<int>(perc * 100) << std::endl;
}
}
