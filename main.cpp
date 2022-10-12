/*
 * It has been created by Mathias Renoult & Emily Baquerizo during a school project.
 * This program compute and plot the Mandelbrot set in console.
 */

#include <iostream>
#include "vector"
#include "display.h"
#include "mandel.h"

using namespace std;

int main() {
    //double X1 = -1, X2 = 1, Y1 = -1, Y2 = 1;
    double X = -0.745200005;
    double Y = 0.112705055;
    double zoom = 2;
    int nX = 200; //between 1 and 250
    int nY = 100; //between 1 and 350
    //int nX = (int)(max(abs(X1-X2),abs(Y1-Y2))/abs(X1-X2))*precision;
    //int nY = (int)(max(abs(X1-X2),abs(Y1-Y2))/abs(Y1-Y2))*precision;
    std::vector<std::vector<int>> tableau = createArray(nX, nY);

    while(zoom<100)
    {
        tableau = calcRect(tableau, X, Y, nX, nY, zoom*=0.9);
        displayArray(tableau);
    }
    return 0;
}
