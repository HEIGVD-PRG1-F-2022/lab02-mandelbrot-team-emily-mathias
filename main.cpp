#include <iostream>
#include "vector"
#include "display.h"
#include "mandel.h"

using namespace std;

int main() {
    double X1 = -2.0, X2 = 0.47, Y1 = -1.12, Y2 = 1.12;
    int precision = 20;
    int nX = abs(X2-X1)*precision;
    int nY = abs(Y2-Y1)*precision;
    std::vector<std::vector<int>> tableau = createArray(nX, nY);
    tableau = calcRect(tableau, X1, X2, Y1, Y2, nX, nY);
    displayArray(tableau);
    return 0;
}
