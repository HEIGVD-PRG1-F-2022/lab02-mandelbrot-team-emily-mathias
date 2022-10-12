//
// Created by trixi on 05/10/2022.
//
#include <iostream>
#include "mandel.h"
#include "vector"

//const int MAX_ITERATION = 1000

std::vector<std::vector<int>> createArray(int nX, int nY)
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
    double x = 0, y = 0;
    int iteration = 0, maxIteration = MAX_ITERATION;
    for(; (x*x) + (y*y) <= (2*2) && iteration < maxIteration; iteration++)
    {
        double xTemp = x*x - y*y + x0;
        y = 2*x*y + y0;
        x = xTemp;
    }

    return iteration;
}

std::vector<std::vector<int>> calcRect(std::vector<std::vector<int>> array, double X, double Y, int nX, double zoom)
{
    return calcRect(array, X-(zoom), X+(zoom), Y-(zoom), Y+(zoom), nX, nX);
}

std::vector<std::vector<int>> calcRect(std::vector<std::vector<int>> array, double X1, double X2, double Y1, double Y2, int nX, int nY)
{
    for (int i = 0; i < array.size(); ++i) {
        for (int j = 0; j < array[0].size(); ++j) {
            double dx = (X2-X1)/nX;
            double dy = (Y2-Y1)/nY;
            array[i][j] = getMandelFromCoord((dx * i) + X1, (dy * j) + Y1);
        }
    }
    return array;
}
