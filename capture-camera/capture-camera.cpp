#include "opencv2/opencv.hpp"
 
#ifdef _DEBUG
    //Debugモードの場合
    #pragma comment(lib,"opencv_core248d.lib")
    #pragma comment(lib,"opencv_imgproc248d.lib")
    #pragma comment(lib,"opencv_highgui248d.lib")
    #pragma comment(lib,"opencv_objdetect248d.lib")
    #pragma comment(lib,"opencv_contrib248d.lib")
    #pragma comment(lib,"opencv_features2d248d.lib")
    #pragma comment(lib,"opencv_flann248d.lib")
    #pragma comment(lib,"opencv_gpu248d.lib")
    #pragma comment(lib,"opencv_legacy248d.lib")
    #pragma comment(lib,"opencv_ts248d.lib")
    #pragma comment(lib,"opencv_video248d.lib")
#else
    //Releaseモードの場合
    #pragma comment(lib,"opencv_core248.lib")
    #pragma comment(lib,"opencv_imgproc248.lib")
    #pragma comment(lib,"opencv_highgui248.lib")
    #pragma comment(lib,"opencv_objdetect248.lib")
    #pragma comment(lib,"opencv_contrib248.lib")
    #pragma comment(lib,"opencv_features2d248.lib")
    #pragma comment(lib,"opencv_flann248.lib")
    #pragma comment(lib,"opencv_gpu248.lib")
    #pragma comment(lib,"opencv_legacy248.lib")
    #pragma comment(lib,"opencv_ts248.lib")
    #pragma comment(lib,"opencv_video248.lib")
#endif

int main(int argc, char *argv[]){
  cv::VideoCapture cap(0);
  cap.set(CV_CAP_PROP_FRAME_WIDTH, 640);
  cap.set(CV_CAP_PROP_FRAME_HEIGHT, 480);
  if(!cap.isOpened()) return -1;

  cv::namedWindow("Capture", CV_WINDOW_AUTOSIZE|CV_WINDOW_FREERATIO);

  while(1) {
    cv::Mat frame;
    cap >> frame;

    cv::imshow("Capture", frame);

    if(cv::waitKey(30) >= 0){
       break;
    }
  }
}

