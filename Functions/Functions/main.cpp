#include<iostream>
using namespace std;

//Asus VivoBook 15 X515EA

//Unresolved externals
//Unresolved external symbol found
//LNK - Linker (Компоновщик)
//LNK2019 - ошибка на этапе компоновки

int Add(int a, int b = 0);	//Прототип функции (Объявление функции - Function declaration)
								//Прототип функции нужне для того чтобы имя функции, ее список 
								//принимаемых параметров, и тип возвращаемого значения были 
								//известны на момент вызова.
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

void main()
{
	int a, b;
	cout << sizeof(int) << endl;	//Оператор sizeof() возвращает размер в Байтах.
	cout << sizeof(double) << endl;
	cout << "Type two numbers: "; cin >> a >> b;
	int c = Add(a, b);	//Вызов функции (Function call) - это использование функции.
	//Один раз написанная функция может быть вызвана сколько угодно раз,
	//именно это и приводит к повторному исползованию кода функции,
	//и именно это в значительной степени сокращает объем исходного кода.
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;

	//Too few arguments in function call, если в функцию передать меньше параметров, чем она принимает.
	//Too many arguments in function call, если в функцию передать больше параметрв, чем она принимает.
	//Function doesn't take N arguments.
}

int Add(int a, int b)		//Реализация функции (Определене функции - Function definition)
							//Реализаци определяет что делает функция.
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