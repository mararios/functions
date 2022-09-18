#include"constants.h"
#include"stdafx.h"

//Заполнение массива случайными числами 

void FillRand(int arr[], const int n, int minRand, int maxRand)		//ф-ия для интового одномерного массива
{
	if (maxRand <= minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}


}

void FillRand(double arr[], const int n, int minRand, int maxRand)		//ф-ия для дабловсокго одномерного массива 
{
	if (maxRand <= minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(float arr[], const int n, int minRand, int maxRand)		//ф-ия для флоатовского одномерного массива 
{
	if (maxRand <= minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;
	minRand *= 100;
	maxRand *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

/*
void FillRand(char arr[], const int n, int minRand, int maxRand)		//ф-ия для чаровского одномерного массива
{
		if (maxRand <= minRand)
		{
			int buffer = minRand;
			minRand = maxRand;
			maxRand = buffer;
		}
		if (minRand == maxRand)maxRand++;
		minRand *= 100;
		maxRand *= 100;

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}*/

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)  //ф-я для интового двухмерного массива
{
	if (maxRand <= minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)  //ф-ия для дабловского двухмерного массива
{
	if (maxRand <= minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)    //ф-ия для флоатовского двухмерного массива
{
	if (maxRand <= minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}
	if (minRand == maxRand)maxRand++;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}
	}
}
