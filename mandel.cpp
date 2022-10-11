//
// Created by trixi on 05/10/2022.
//
#include <iostream>
#include "mandel.h"
#include "vector"
#include "cmath"
/*
std::vector<std::vector<int>> createArray(double x1, double y1, double x2, double y2, int n)
{
    std::vector<std::vector<int>> array;
    int width = abs(x2-x1)/n;
    int length = abs(y2-y1)/n;
    for(int i = 0; i < length; i++)
    {
        std::vector<int> v1;
        for(int j = 0; j < width; j++)
        {
            v1.push_back(0);
        }
        array.push_back(v1);
    }
    return array;
}
*/
std::vector<std::vector<int>> createArray(int nX, int nY)
{
    std::vector<std::vector<int>> array;

    for(int i = 0; i < nY; i++)
    {
        std::vector<int> v1;
        for(int j = 0; j < nX; j++)
        {
            v1.push_back(0);
        }
        array.push_back(v1);
    }
    return array;
}

int getMandelFromCoord(double x0, double y0)
{
    double x = 0, y = 0;
    int iteration = 0, maxIteration = 1000;
    for(; (x*x) + (y*y) <= (2*2) && iteration < maxIteration; iteration++)
    {
        double xTemp = x*x - y*y + x0;
        y = 2*x*y + y0;
        x = xTemp;
    }

    return iteration;
}

std::vector<std::vector<int>> calcRect(std::vector<std::vector<int>> array, double X1, double X2, double Y1, double Y2, int nX, int nY)
{
    for (int i = 0; i < array.capacity(); ++i) {
        for (int j = 0; j < array[0].capacity(); ++j) {
            double dx = (X2-X1)/nX;
            double dy = (Y2-Y1)/nY;
            array[j][i] = getMandelFromCoord((dx * i) + X1, (dy * j) + Y1);
            //std::cout << "Cell " << i << " " << j << " = " << array[i][j] << std::endl;
        }
    }

    return array;
}
