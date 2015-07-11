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

int
main(int argc, char *argv[])
{
  cv::Mat src_img = cv::imread("lena.jpg", 1);
  if(!src_img.data) return -1;

  // CV_WINDOW_AUTOSIZE : ウィンドウサイズを画像サイズに合わせる
  // CV_WINDOW_FREERATIO : ウィンドウのアスペクト比を固定しない
  cv::namedWindow("Image", CV_WINDOW_AUTOSIZE|CV_WINDOW_FREERATIO);

  cv::imshow("Image", src_img);

  cv::waitKey(0);
}
