#pragma once

#include"constants.h"

void FillRand(int arr[], const int, int minrand = 0, int maxRand = 100);
void FillRand(double arr[], const int, int minrand = 0, int maxRand = 100);
void FillRand(float arr[], const int, int minrand = 0, int maxRand = 100);
//void FillRand(char arr[], const int, int minrand=0,int maxRand=100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
