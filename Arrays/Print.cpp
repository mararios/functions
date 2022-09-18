#include"stdafx.h"
#include"constants.h"


//Выводим массив на экран 
void Print(int arr[], const int n)				 //ф-ия для интового одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}


void Print(double arr[], const int n)			//ф-ия для дабловсокго одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Print(float arr[], const int n)			//ф-ия для флоатовского одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
/*
void Print(char arr[], const int n)			//ф-ия для чаровского одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}*/




void Print(int arr[ROWS][COLS], const int ROWS, const int COLS) //ф-ия для инового двухмирного массива
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)		//ф-ия для дабловского двухмерного массива 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)		//ф-ия для флоатовского двухмерного массива
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}