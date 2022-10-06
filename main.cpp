#include <iostream>
#include "vector"
#include "display.h"
#include "mandel.h"

using namespace std;

int main() {
    std::vector<std::vector<int>> tableau = createArray(2, 2, 3, 3);
    displayArray(tableau);
    return 0;
}
