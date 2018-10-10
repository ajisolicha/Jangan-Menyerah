#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/core.hpp>


using namespace std;
using namespace cv;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::pengolahangambar()
{
    Mat img1;
    img1= imread ("C:/users/user/documents/101.png");
    Mat img2;
    img2= imread ("C:/users/user/documents/Gray_image.jpg");
    Mat img3;
   addWeighted(img1,0.1,img2,0.7,0,img3);
    Mat imgfix;
   cvtColor (img3,imgfix,CV_BGR2RGB);
   const unsigned char *qImageBuffer= (const unsigned char*)imgfix.data;
     QImage gambarku= QImage(qImageBuffer,imgfix.cols,imgfix.rows,imgfix.step,QImage::Format_RGB888);
     // QPixmap alhamdulillah= QPixmap::fromImage(gambarku);
   ui->label->setPixmap(QPixmap::fromImage(gambarku));

}
