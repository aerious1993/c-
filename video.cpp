// lane_detection_pic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <opencv2\opencv.hpp>
#include <math.h>
#include "lane_detection.h"
#include "parameter.h"
#include <ctime>


using namespace cv;
using namespace std;



int main()
{
	string filename = "test.mp4";

	Mat frame,grey,edges;
	int key_pressed = 0;

	int sigma = 3;
	int ksize = (sigma * 5) | 1;

	cv::VideoCapture cap;
	cap.set(CV_CAP_PROP_FPS, 25);
	cap.set(CV_CAP_PROP_BUFFERSIZE, 3);
	cap.open(filename);
	if (!cap.isOpened()) { // check if we succeeded
		std::cerr << "Couldn't open capture." << std::endl;
		return -1;
	}


	for (;;) {

		cap >> frame;
		if (frame.empty()) break; // Ran out of film

		//roi
	    //Rect region_of_interest = Rect(0, frame.size().height / 2, frame.size().width, frame.size().height / 2);
		//Mat temp_frame = frame(region_of_interest);
		Mat temp_frame;
		//remove noise
		cv::Canny(frame,temp_frame ,50, 200, 3);
		//cvtColor(temp_frame, grey, CV_RGB2GRAY);
		//GaussianBlur(grey, grey, Size(ksize, ksize), 0, 0);

		


		//SHOW
		cv::imshow("Example3", frame);
		imshow("ROI", temp_frame);
		//imshow("GRAYSCALE", grey);
		//imshow("EDGES", edges);

	
		if (waitKey(1) == 27)
			break;
	}

    return 0;
}

