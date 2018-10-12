#include <opencv2/opencv.hpp>
using namespace cv;				// 包含 CV 的命名空间
int main()
{
	// 从硬盘中读取图像文件
	Mat srcImage = imread("F:\\VS17_OpenCV3\\Material\\LongMao.jpg");
	imshow("The Image", srcImage);			// 显示图像
	waitKey(0);					// 等待任意键按下
	return 0;
}
