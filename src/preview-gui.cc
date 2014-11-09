#include <opencv2/highgui/highgui.hpp>
#include "preview.h"

namespace blossoms {

void preview(const std::string& name, const cv::Mat& img) {
  cv::namedWindow(name, CV_WINDOW_NORMAL | CV_WINDOW_KEEPRATIO);
  cv::imshow(name, img);
  cv::waitKey(0);
}
}
