#include <opencv2/opencv.hpp>
using namespace cv;				// ���� CV �������ռ�
int main()
{
	// ��Ӳ���ж�ȡͼ���ļ�
	Mat srcImage = imread("F:\\VS17_OpenCV3\\Material\\LongMao.jpg");
	imshow("��ԭʼͼ��", srcImage);			// ��ʾͼ��
	waitKey(0);								// �ȴ����������
	return 0;
}

