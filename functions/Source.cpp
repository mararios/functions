#include<iostream>
using namespace std;
int Add(int a, int b);    //Прототип функции или объявление функции 
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);   //Вызов функции - использование функции 
	cout << a << "+" << b << "=" << c << endl;
	cout << a << "-" << b << "=" << Sub(a, b) << endl;
	cout << a << "*" << b << "=" << Mul(a, b) << endl;
	cout << a << "/" << b << "=" << Div(a, b) << endl;
}

//type n
int Add(int a, int b)    // реализация 
{
	//Addition - сложение
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	//multiplication
	return a * b;
}
double Div(int a, int b)
{
	//Division 
	return (double)a / b;
}



