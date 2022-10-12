//
// Created by trixi on 12/10/2022.
//

#ifndef LABO02___MANDELBROOT_SET_CONSOLE_H
#define LABO02___MANDELBROOT_SET_CONSOLE_H
#include <Windows.h>
#include <iostream>
static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
void cls();
void setCursorPosition(int x, int y);
#endif //LABO02___MANDELBROOT_SET_CONSOLE_H
