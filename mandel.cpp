//
// Created by trixi on 05/10/2022.
//
#include "mandel.h"
#include "vector"
#include "cmath"
std::vector<std::vector<int>> createArray(int x1, int y1, int x2, int y2, int n)
{
    std::vector<std::vector<int>> array;

    for(int i = 0; i < n; i++)
    {
        std::vector<int> v1;
        for(int j = 0; j < n; j++)
        {
            v1.push_back(0);
        }
        array.push_back(v1);
    }
    return array;
}

std::vector<std::vector<int>> createArray(int x, int y, int nX, int nY)
{
    std::vector<std::vector<int>> array;

    for(int i = 0; i < nX; i++)
    {
        std::vector<int> v1;
        for(int j = 0; j < nY; j++)
        {
            v1.push_back(0);
        }
        array.push_back(v1);
    }
    return array;
}

int getMandelFromCoord(double x0, double y0)
{

    //double x0 = (std::abs(scaleX[0]-scaleX[1])/canvasSize[0]) * posX;
    //double y0 = (std::abs(scaleY[0]-scaleY[1])/canvasSize[1]) * posY;
    double x = 0, y = 0;
    int iteration = 0, maxIteration = 1000;
    for(; (x*x) + (y*y) >= (2*2) && iteration < maxIteration; iteration++)
    {
        double xTemp = x*x - y*y + x0;
        y = 2*x*y + y0;
        x = xTemp;
    }

    return iteration;

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
