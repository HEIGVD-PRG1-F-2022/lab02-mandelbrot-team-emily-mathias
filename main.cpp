#include <iostream>
#include "vector"
#include "display.h"
#include "mandel.h"

using namespace std;

int main() {
    double X1 = -1, X2 = 1, Y1 = -1, Y2 = 1;
    int precision = 100;

    int nX = (int)(max(abs(X1-X2),abs(Y1-Y2))/abs(X1-X2))*precision;
    int nY = (int)(max(abs(X1-X2),abs(Y1-Y2))/abs(Y1-Y2))*precision;

    std::vector<std::vector<int>> tableau = createArray(nX, nY);
    tableau = calcRect(tableau, X1, X2, Y1, Y2, nX, nY);
    displayArray(tableau);
    while(1)
    {

    }
    return 0;
}
