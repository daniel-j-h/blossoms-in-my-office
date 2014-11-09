#pragma once

namespace cv {
class Mat;
}

namespace blossoms {

void filter(const cv::Mat& in, cv::Mat& out);
}
