# Blossoms In My Office

Blossoms! In my Office?

Detecting blossoms in sand, from a front point of view:
![sand](https://raw.github.com/daniel-j-h/blossoms-in-my-office/master/images/sand.jpg)

Detecting blossoms in soil, from a top point of view:
![soil](https://raw.github.com/daniel-j-h/blossoms-in-my-office/master/images/soil.jpg)

Detecting blossoms in a train:
![train](https://raw.github.com/daniel-j-h/blossoms-in-my-office/master/images/train.jpg)

Uses only webcam images for now; I can think of sensors for soil moisture, temperature, and more.

## Getting started

You need: OpenCV2, C++11 compiler (tested with gcc 4.8, clang 3.5).

    make -C src -f ../env/makefile.g++ -j 4

Note: see env directory.

## Usage

    ./src/blossoms images/top-soil.jpg

## License

Copyright (C) 2014 Daniel J. H.

Distributed under the MIT License.
