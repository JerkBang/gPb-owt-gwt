#include "cv.h"
#include <vector>

IplImage* G(IplImage *input, int x, int y, int angle = 0, int range = 5)
{
	IplImage* signal = cvCreateImage(input->nSize, input->depth, input->nChannels);

	//����һ��ͼƬĳ��ͨ�����ź���
	(input->imageData + x * input->widthStep)[y];

	
	return signal;
}