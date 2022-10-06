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

        //double x0 = (std::abs(scaleX[0]-scaleX[1])/canvasSize[0]) * posX;
        //double y0 = (std::abs(scaleY[0]-scaleY[1])/canvasSize[1]) * posY;
        double x0 = posX, y0 = posY;
        double x = 0, y = 0;
        int maxIteration = 1000;
        for(int i = 0; (x*x) + (y*y) >= (2*2) && i < maxIteration; i++)
        {
            double xTemp = x*x - y*y + x0;
            y = 2*x*y + y0;
            x = xTemp;
        }

        /*
        for each pixel (Px, Py) on the screen do
            x0 := scaled x coordinate of pixel (scaled to lie in the Mandelbrot X scale (-2.00, 0.47))
        y0 := scaled y coordinate of pixel (scaled to lie in the Mandelbrot Y scale (-1.12, 1.12))
        x := 0.0
        y := 0.0
        iteration := 0
        max_iteration := 1000
        while (x*x + y*y ≤ 2*2 AND iteration < max_iteration) do
            xtemp := x*x - y*y + x0
        y := 2*x*y + y0
        x := xtemp
        iteration := iteration + 1
        */
    }

};
