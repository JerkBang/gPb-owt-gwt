// trail.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "cv.h"
#include "highgui.h"

int main()
{
	IplImage *input = cvCreateImage(cvSize(4,4), IPL_DEPTH_1U, 3);
	cvSetZero(input);
	//*input->imageData = 1;
	*((int*)(input->imageData + 1))= -4;
	/**_byte = -4;
	*(_byte + 1) = -3;*/
	/*cvNamedWindow("win1");
	cvShowImage("win1", input);*/

	for (int i = 0; i < input->width; i++)
	{
		for (int j = 0; j < input->height; j++)
			std::cout << (int)((input->imageData + i * input->widthStep)[j * input->nChannels])
						<< "\t";

		std::cout << "widthStep = " << input->widthStep << std::endl;
	}

	std::cout << "\n\n"<< std::endl;

	for (int i = 0; i < input->width; i++)
	{
		for (int j = 0; j < input->height; j++)
			std::cout << (int)((input->imageData + i * input->widthStep)[j * input->nChannels + 1])
			<< "\t";

		std::cout << "widthStep = " << input->widthStep << std::endl;
	}

	std::cout << "\n\n" << std::endl;

	for (int i = 0; i < input->width; i++)
	{
		for (int j = 0; j < input->height; j++)
			std::cout << (int)((input->imageData + i * input->widthStep)[j * input->nChannels + 2])
			<< "\t";

		std::cout << "widthStep = " << input->widthStep << std::endl;
	}

	std::cout << "\n\n" << std::endl;

	/*for (int i = 0; i < input->width; i++)
	{
		for (int j = 0; j < input->height; j++)
			std::cout << (int)((input->imageData + i * input->widthStep)[j * input->nChannels + 3])
			<< "\t";

		std::cout << "widthStep = " << input->widthStep << std::endl;
	}*/
	cvWaitKey(0);
}
