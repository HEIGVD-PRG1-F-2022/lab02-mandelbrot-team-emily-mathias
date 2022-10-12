#include <iostream>
#include "vector"
#include "display.h"
#include "mandel.h"

using namespace std;

int main() {
    //double X1 = -1, X2 = 1, Y1 = -1, Y2 = 1;
    double X = -0.745200005;
    double Y = 0.112705055;
    double zoom = 0.5;
    int precision = 120;

    int nX = precision, nY = precision;
    //int nX = (int)(max(abs(X1-X2),abs(Y1-Y2))/abs(X1-X2))*precision;
    //int nY = (int)(max(abs(X1-X2),abs(Y1-Y2))/abs(Y1-Y2))*precision;
    std::vector<std::vector<int>> tableau = createArray(nX, nY);

    while(zoom<100)
    {
        tableau = calcRect(tableau, X, Y, nX, zoom-=(zoom/30));
        displayArray(tableau);
    }
    return 0;
}
