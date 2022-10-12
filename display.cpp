//
// Created by trixi on 06/10/2022.
//
#include <iostream>
#include "vector"
#include "console.h"
#include "string"
#include "mandel.h"
#include "console.h"
using namespace std;

void displayArray(std::vector<std::vector<int>> array)
{
    static char output[250][350];
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[0].size(); j++){
            int character;
            char currentChar = output[i][j];
            char nextChar = 'X';
            int color = 0;
            character = (array[i][j]/(MAX_ITERATION/10)) + 1;
            switch (character) {
                case 1 : nextChar = ' '; color = 0; break;
                case 2 : nextChar = '.'; color = 17; break;
                case 3 : nextChar = ':'; color = 34; break;
                case 4 : nextChar = '-'; color = 51; break;
                case 5 : nextChar = '='; color = 68; break;
                case 6 : nextChar = '+'; color = 85; break;
                case 7 : nextChar = '*'; color = 102; break;
                case 8 : nextChar = '#'; color = 119; break;
                case 9 : nextChar = '%'; color = 136; break;
                case 10 :nextChar = '&'; color = 153; break;
                case 11 :nextChar = '@'; color = 170; break;
                default: nextChar = 'X'; color = 20; break;
            }

            if(currentChar!=nextChar){
                output[i][j] = nextChar;
                setCursorPosition(i,j);
                SetConsoleTextAttribute(hOut, color);
                cout << nextChar;
            }
            SetConsoleTextAttribute(hOut, 0);
        }
    }
    SetConsoleTextAttribute(hOut, 0);
    cout.flush();
}