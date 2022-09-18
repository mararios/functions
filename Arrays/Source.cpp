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
	
	//cout << "������� ����������� ��������� �����: "; cin >> minRand;
	//cout << "������� ������������ ��������� �����: "; cin >> maxRand;

	/*
	if (maxRand <= minRand)
	{
		int buffer = minRand;
		minRand = maxRand;
		maxRand = buffer;
	}*/
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "����������� �������� � �������: " << maxValueIn(arr, n) << endl;

	Sort(arr, n);
	Print(arr, n);

	cout << endl;

	
	int number_of_shifts;
	cout << "������� ���-�� �������: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	cout << "������� ���-�� �������: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	//----------------------------------------------------------------------------
	cout << "double:\n" << endl;
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr, D_SIZE) << endl;
	cout << "����������� �������� �������: " << minValueIn(d_arr, D_SIZE) << endl;
	cout << "������������ �������� �������: " << maxValueIn(d_arr, D_SIZE) << endl;
	cout << "������� ���-�� ��������: "; cin >> number_of_shifts;
	cout << "����� ������� �����: " << endl;
	shiftLeft(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);
	cout << "������� ���-�� ��������: "; cin >> number_of_shifts;
	cout << "����� ������� ������: " << endl;
	shiftRight(d_arr, D_SIZE, number_of_shifts);
	Print(d_arr, D_SIZE);

	cout << "���������� ��������� �������: " << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	//--------------------------------------------------------------------------------------------------------------------
	cout << "float:\n" << endl;
	const int F_SIZE = 5;
	double f_arr[F_SIZE];

	FillRand(f_arr, F_SIZE);
	Print(f_arr, F_SIZE);

	cout << "���������� ��������� �������: " << endl;
	Sort(f_arr, F_SIZE);
	Print(f_arr, F_SIZE);

	cout << "����� ��������� �������: " << Sum(f_arr, F_SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(f_arr, F_SIZE) << endl;
	cout << "����������� �������� �������: " << minValueIn(f_arr, F_SIZE) << endl;
	cout << "������������ �������� �������: " << maxValueIn(f_arr, F_SIZE) << endl;
	cout << "������� ���-�� ��������: "; cin >> number_of_shifts;
	cout << "����� ������� �����: " << endl;
	shiftLeft(f_arr, F_SIZE, number_of_shifts);
	Print(f_arr, F_SIZE);
	cout << "������� ���-�� ��������: "; cin >> number_of_shifts;
	cout << "����� ������� ������: " << endl;
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
	cout << "����� ��������� �������: " << Sum(i_arr_2, ROWS,COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr_2, ROWS,COLS) << endl;
	//cout << "����������� �������� �������: " << minValueIn(i_arr_2, ROWS,COLS) << endl;
	//----------------------------------------------------------------------------------------------------------------------
	cout << "2D double" << endl;
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr_2, ROWS, COLS) << endl;
	//---------------------------------------------------------------------------------------------------------------------
	cout << "2D double" << endl;
	float f_arr_2[ROWS][COLS];
	FillRand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(f_arr_2, ROWS, COLS) << endl;
}
