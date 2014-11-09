#pragma once

#include <string>

namespace cv {
class Mat;
}

namespace blossoms {

void preview(const std::string& name, const cv::Mat& img);
}
