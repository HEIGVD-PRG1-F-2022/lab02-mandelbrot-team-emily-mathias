/*
* Created by Mathias Renoult & Emily Baquerizo on 06/10/2022.
* contain the function who display something on the screen
*/
#include <iostream>
#include "vector"
#include "console.h"
#include "string"
#include "mandel.h"
#include "colors.h"
#include "cmath"

using namespace std;

//take the value of the array and transforms them into ASCII characters and then display those in the console.
void displayArray(std::vector<std::vector<int>> array)
{
    string output;
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[0].size(); j++){
            double character = ((double)array[i][j]/(double)(MAX_ITERATION));
            output += "\u001b[48;5;" + to_string(colors[(int)round(character*colors.size())-1]) + "m" + " " + "\u001b[0m";
        }
        output += "\n";
    }
    setCursorPosition(0,0);
    cout << output;
}