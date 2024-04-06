#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() 
{
    string imagePath = "image.jpg";
    Mat image = imread(imagePath);
    if (image.empty()) 
    {
        cout << "Image not found." << endl;
        return -1;
    }
    circle(image, Point(100, 100), 50, Scalar(0, 255, 0), 2);
    rectangle(image, Rect(200, 200, 100, 50), Scalar(255, 0, 0), 2);
    line(image, Point(300, 300), Point(400, 400), Scalar(0, 0, 255), 2); 
    ellipse(image, Point(150, 150), Size(100, 50), 45, 0, 360, Scalar(255, 255, 0), 2); 
    putText(image, "OpenCV", Point(200, 100), FONT_HERSHEY_SIMPLEX, 1, Scalar(255, 255, 255), 2); 
    imshow("Image with Shapes and Text", image);
    waitKey(0);
    return 0;
}
