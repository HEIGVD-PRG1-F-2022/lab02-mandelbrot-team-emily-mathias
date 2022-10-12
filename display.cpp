//
// Created by trixi on 06/10/2022.
//
#include <iostream>
#include "vector"
#include "console.h"
#include "string"
#include "mandel.h"
using namespace std;

void displayArray(std::vector<std::vector<int>> array)
{
    static char output[200][200];
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[0].size(); j++){
            int character;
            char currentChar = output[j][i];
            char nextChar = 'X';
            character = (array[j][i]/(MAX_ITERATION/10)) + 1;
            switch (character) {
                case 1 : nextChar = ' '; break;
                case 2 : nextChar = '.'; break;
                case 3 : nextChar = ':'; break;
                case 4 : nextChar = '-'; break;
                case 5 : nextChar = '='; break;
                case 6 : nextChar = '+'; break;
                case 7 : nextChar = '*'; break;
                case 8 : nextChar = '#'; break;
                case 9 : nextChar = '%'; break;
                case 10 :nextChar = '&'; break;
                case 11 :nextChar = '@'; break;
                default: nextChar = 'X'; break;
            }

            if(currentChar!=nextChar){
                output[j][i] = nextChar;
                setCursorPosition(j,i);
                cout << nextChar;
            }
            else
            {
                //setCursorPosition(j,i);
                //cout << 'O';
            }
        }
    }
    cout.flush();
}