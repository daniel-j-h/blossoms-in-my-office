#include <vector>
#include <string>
#include <stdexcept>
#include <opencv2/highgui/highgui.hpp>
#include "input.h"

namespace blossoms {

/* Todo:
 *  - files from stdin
 *  - multiple files
 *  - user flags, e.g. color, threshold, kernel size, ..
 */
cv::Mat input(int argc, char** argv) {
  std::vector<std::string> args{argv, argv + argc};

  if (args.size() != 2)
    throw std::runtime_error{"image required"};

  auto rv = cv::imread(args[1]);

  if (!rv.data)
    throw std::runtime_error{"image invalid"};

  return rv;
}
}
