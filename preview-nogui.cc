#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include "preview.h"

namespace blossoms {

void preview(const std::string&, const cv::Mat& img) {
  // percentage of red'ish blossoms in image
  std::cout << cv::mean(img)[0] << std::endl;
}
}
