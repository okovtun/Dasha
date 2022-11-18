#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	//int (Integer - Целое число)
	//Integral - Целочисленный
	const int n = 5;	//Количество элементов массива
	int arr[n];			//Объявление статического массива

	FillRand(arr, n);
	Print(arr, n);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
		//Функиця rand() возвращает псевдослучайное число в диапазоне от 0 до 32767 (RAND_MAX)
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}