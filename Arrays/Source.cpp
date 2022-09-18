#include"stdafx.h"
#include"FillRand.h"
#include"constants.h"
#include"Print.h"
#include"Shifts.h"
#include"Statistics.h"
#include"Sort.h"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand=100, maxRand=200;
	
	//cout << "Введите минимальное случайное число: "; cin >> minRand;
	//cout << "Введите максимальное случайное число: "; cin >> maxRand;

	/*
	if (maxRand <= minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}*/
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимально значение в массиве: " << maxValueIn(arr, n) << endl;

	Sort(arr, n);
	Print(arr, n);

	cout << endl;

	
	int number_of_shifts;
	cout << "Введите кол-во сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	cout << "Введите кол-во сдвигов: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	//----------------------------------------------------------------------------
	cout << "double:\n" << endl;
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr, D_SIZE) << endl;
	cout << "Минимальное значение массива: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << "Введите кол-во сдивигов: "; cin >> number_of_shifts;
	cout << "Сдвиг массива влево: " << endl;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "Введите кол-во сдивигов: "; cin >> number_of_shifts;
	cout << "Сдвиг массива вправо: " << endl;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);

	cout << "Сортировка элементов массива: " << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	//--------------------------------------------------------------------------------------------------------------------
	cout << "float:\n" << endl;
	const int F_SIZE = 5;
	double f_arr[F_SIZE];

	FillRand(f_arr, F_SIZE);
	Print(f_arr, F_SIZE);

	cout << "Сортировка элементов массива: " << endl;
	Sort(f_arr, F_SIZE);
	Print(f_arr, F_SIZE);

	cout << "Сумма элементов массива: " << Sum(f_arr, F_SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(f_arr, F_SIZE) << endl;
	cout << "Минимальное значение массива: " << minValueIn(f_arr, F_SIZE) << endl;
	cout << "Максимальное значение массива: " << maxValueIn(f_arr, F_SIZE) << endl;
	cout << "Введите кол-во сдивигов: "; cin >> number_of_shifts;
	cout << "Сдвиг массива влево: " << endl;
	shiftLeft(f_arr, F_SIZE, number_of_shifts);
	Print(f_arr, F_SIZE);
	cout << "Введите кол-во сдивигов: "; cin >> number_of_shifts;
	cout << "Сдвиг массива вправо: " << endl;
	shiftRight(f_arr, F_SIZE, number_of_shifts);
	Print(f_arr, F_SIZE);
	//--------------------------------------------------------------------------------------------------------------------
	/*cout << "char:\n" << endl;
	const int C_SIZE = 10;
	double c_arr[F_SIZE];
	
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);*/
	//--------------------------------------------------------------------------------------------------------------------
	cout << "\n2D:\n";

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS,COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS,COLS) << endl;
	//cout << "Минимальное значение массива: " << minValueIn(i_arr_2, ROWS,COLS) << endl;
	//----------------------------------------------------------------------------------------------------------------------
	cout << "2D double" << endl;
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	//---------------------------------------------------------------------------------------------------------------------
	cout << "2D double" << endl;
	float f_arr_2[ROWS][COLS];
	FillRand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(f_arr_2, ROWS, COLS) << endl;
}
