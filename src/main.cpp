// 基本的OpenCV程序示例
#include <opencv2/opencv.hpp>

int main() {
    cv::Mat img = cv::imread("image.jpg");
    cv::imshow("Image", img);
    cv::waitKey(0);
    return 0;
}