/*
 * It has been created by Mathias Renoult & Emily Baquerizo during a school project.
 * This program compute and plot the Mandelbrot set in console.
 * It also allows the user to navigate the animation
 */

#include <iostream>
#include "vector"
#include "display.h"
#include "mandel.h"
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

int main() {
#ifdef _WIN32
    system(("chcp "s + std::to_string(CP_UTF8)).c_str());
#endif
    //double X1 = -1, X2 = 1, Y1 = -1, Y2 = 1;
    double X = -0.59990625;
    double Y = -0.4290703125;
    double zoom = 0.5;
    int nX = 124; //between 1 and 250
    int nY = 124; //between 1 and 350
    //int nX = (int)(max(abs(X1-X2),abs(Y1-Y2))/abs(X1-X2))*precision;
    //int nY = (int)(max(abs(X1-X2),abs(Y1-Y2))/abs(Y1-Y2))*precision;
    std::vector<std::vector<int>> tableau = createArray(nX, nY);


    while(zoom<100)
    {
        char choice;
        cout << "Please enter a command (q,w,e,a,s,d,)..." << endl;
        cin >> choice;
        switch(choice)
        {
            case 'q': zoom *= 0.75; break;
            case 'e': zoom *= 1.25; break;
            case 'w': X *= 1.1; break;
            case 'a': Y *= 1.1; break;
            case 's': X *= 0.9; break;
            case 'd': Y *= 0.9; break;
            default: cout << "Accepted inputs are : q,w,e,a,s,d." << endl;
        }
        tableau = calcRect(tableau, X, Y, nX, nY, zoom);
        displayArray(tableau);

    }


    return 0;
}
