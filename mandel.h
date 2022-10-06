//
// Created by trixi on 05/10/2022.
//

#ifndef LABO02___MANDELBROOT_SET_MANDEL_H
#define LABO02___MANDELBROOT_SET_MANDEL_H
#include "vector"
std::vector<std::vector<int>> createArray(int x1, int y1, int x2, int y2, double n);
std::vector<std::vector<int>> createArray(int x, int y, int nX, int nY);
int getMandelFromCoord(double, double);

#endif //LABO02___MANDELBROOT_SET_MANDEL_H
