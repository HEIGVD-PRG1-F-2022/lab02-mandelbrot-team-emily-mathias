/*
 * Created by Mathias Renoult & Emily Baquerizo on 05/10/2022.
 */

#ifndef LABO02___MANDELBROOT_SET_MANDEL_H
#define LABO02___MANDELBROOT_SET_MANDEL_H
#include "vector"
const int MAX_ITERATION = 1000;
std::vector<std::vector<int>> createArray(int nX, int nY);
int getMandelFromCoord(double x0, double y0);
std::vector<std::vector<int>> calcRect(std::vector<std::vector<int>> array, double X, double Y, int nX, int nY, double zoom);
std::vector<std::vector<int>> calcRect(std::vector<std::vector<int>> array, double X1, double X2, double Y1, double Y2, int nX, int nY);
#endif //LABO02___MANDELBROOT_SET_MANDEL_H
