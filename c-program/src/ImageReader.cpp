#include "ImageReader.hpp"

cv::Mat ImageReader::readImage(std::string path) {
  return cv::imread(path, CV_LOAD_IMAGE_COLOR);
}
