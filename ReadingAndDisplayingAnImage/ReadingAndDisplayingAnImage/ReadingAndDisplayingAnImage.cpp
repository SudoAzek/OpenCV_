// Ochilov Azamat 2019
// opencv header files
#include "pch.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
// namespace declaration

using namespace cv;
using namespace std;

// create a variable to store the image
Mat image;
int main(int argc, char** argv) {
	// open the image and store it in the 'image' variable
	// replace the path with where you have downloaded the image
	image = imread("E:/Test/lena.jpg");

	// create a window to display the image
	namedWindow("Display window", WINDOW_AUTOSIZE);

	// display the image in the window created
	imshow("Display window", image);
	
	// wait for a keystroke
	waitKey(0);
	return 0;
}