#include <cstdlib>
#include <iostream>
#include <stdexcept>

#include "input.h"
#include "filter.h"
#include "contours.h"
#include "preview.h"

int main(int argc, char** argv) try {
  auto in = blossoms::input(argc, argv);

  blossoms::filter(in, in);
  blossoms::contours(in, in);
  blossoms::preview("Blossoms", in);
} catch (const std::exception& e) {
  std::cerr << "error: " << e.what() << std::endl;
  return EXIT_FAILURE;
}
