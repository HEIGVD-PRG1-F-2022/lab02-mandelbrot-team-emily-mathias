//
// Created by trixi on 06/10/2022.
//
#include <iostream>
#include "vector"

using namespace std;

//Palette {" ",".",":","-","=","+","*","#","%","@"};

void displayArray(std::vector<std::vector<int>> array)
{
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[i].size(); j++){
            int character;
            character = (array[i][j]/100) + 1;
            switch (character) {
                case 1 : cout << ' '; break;
                case 2 : cout << '.'; break;
                case 3 : cout << ':'; break;
                case 4 : cout << '-'; break;
                case 5 : cout << '='; break;
                case 6 : cout << '+'; break;
                case 7 : cout << '*'; break;
                case 8 : cout << '#'; break;
                case 9 : cout << '%'; break;
                case 10 : cout << '&'; break;
                case 11 : cout << '@'; break;
                default: cout << "X"; break;
            }

        }
        cout << endl;
    }
}