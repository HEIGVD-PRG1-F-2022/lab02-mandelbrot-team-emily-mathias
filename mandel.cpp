//
// Created by trixi on 05/10/2022.
//
#include "mandel.h"
#include "vector"
#include "cmath"
class mandelbrot
{
    void getMandelFromCoord(double posX, double posY, std::vector<double> scaleX, std::vector<double> scaleY, std::vector<int> canvasSize)
    {

        double x0 = (std::abs(scaleX[0]-scaleX[1])/canvasSize[0]) * posX;
        double y0 = (std::abs(scaleY[0]-scaleY[1])/canvasSize[1]) * posY;
        double x = 0, y = 0;


    }

};
