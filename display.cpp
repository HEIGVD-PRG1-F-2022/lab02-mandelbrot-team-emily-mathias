//
// Created by trixi on 06/10/2022.
//
#include <iostream>
#include "vector"

using namespace std;

void displayArray(std::vector<std::vector<int>> array)
{
    for (int i = 0; i < array.size(); i++) {
        for (int j = 0; j < array[i].size(); j++){
            cout << array[i][j] << "t";
        }
        cout << endl;
    }
}