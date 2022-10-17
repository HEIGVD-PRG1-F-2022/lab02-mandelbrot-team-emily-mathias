/*
* Created by Mathias Renoult & Emily Baquerizo on 12/10/2022.
* Source : https://stackoverflow.com/questions/34842526/update-console-without-flickering-c
 * Simplifies the usage of the Windows console
*/
#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include "console.h"

void setCursorPosition(int x, int y)
{
    static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout.flush();
    COORD coord = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(hOut, coord);
}