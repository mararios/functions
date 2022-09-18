#include<iostream>
using namespace std;

#define tab "\t"

const int ROWS = 5;			//строки
const int COLS = 4;			//элементы

void FillRand(int arr[], const int, int minrand=0,int maxRand=100);
void FillRand(double arr[], const int, int minrand=0,int maxRand=100);
void FillRand(float arr[], const int, int minrand=0,int maxRand=100);
//void FillRand(char arr[], const int, int minrand=0,int maxRand=100);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);


void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
//void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(float arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);
double minValueIn(double arr[], const int n);
float minValueIn(float arr[], const int n);
//int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);
double maxValueIn(double arr[], const int n);
float maxValueIn(float arr[], const int n);

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(float arr[], const int n, int number_of_shifts);

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(float arr[], const int n, int number_of_shifts);


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

void FillRand(float arr[], const int n, int minRand, int maxRand)		//ф-ия для дабловсокго одномерного массива 
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
void FillRand(char arr[], const int n, int minRand, int maxRand)		//ф-ия для дабловсокго одномерного массива 
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


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
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


void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
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

void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
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

void Print(float arr[], const int n)			//ф-ия для дабловсокго одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
/*
void Print(char arr[], const int n)			//ф-ия для дабловсокго одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}*/




void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
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


//сортировка массива
void Sort(int arr[], const int n)				//ф-ия для интового одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j]< arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)				//ф-ия для дабловсокго одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j]< arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}

void Sort(float arr[], const int n)				//ф-ия для дабловсокго одномерного массива
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j]< arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[i] = buffer;
			}
		}
	}
}

//сумма элементов массива 

int Sum(int arr[], const int n)					//ф-ия для интового одномерного массива
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Sum(double arr[], const int n)			//ф-ия для дабловсокго одномерного массива
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float Sum(float arr[], const int n)			//ф-ия для дабловсокго одномерного массива
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

//среднее-арифметическое элементов массива

double Avg(int arr[], const int n)				//ф-ия для интового одномерного массива
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)			//ф-ия для дабловсокго одномерного массива
{
	return Sum(arr, n) / n;
}

float Avg(float arr[], const int n)			//ф-ия для дабловсокго одномерного массива
{
	return Sum(arr, n) / n;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

float Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}


//Минимальное значение элементов массива 

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
/*
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; i++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}*/

//максимальное значение элементов массивав

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}


//Сдвиг массива влево

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(float arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

//Сдвиг массива вправо 

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

void shiftRight(float arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[n-1];
		for (int i = n-1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
