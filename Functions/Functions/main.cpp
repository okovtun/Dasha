#include<iostream>
using namespace std;

//Asus VivoBook 15 X515EA

int Add(int a, int b)
{
	//Addition - сложение
	int sum = a + b;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication
	return a * b;
}
double Div(int a, int b)
{
	//Division
	return (double)a / b;
}

void main()
{
	int a, b;
	cout << sizeof(int) << endl;	//Оператор sizeof() возвращает размер в Байтах.
	cout << sizeof(double) << endl;
	cout << "Type two numbers: "; cin >> a >> b;
	int c = Add(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}