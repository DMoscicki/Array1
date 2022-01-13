#include <iostream>
#include <math.h>
#include <numeric> 

using namespace std;

const int SIZE = 7;

void printArray(int mass[SIZE]); // объявление функции
void intArray(int well[SIZE]);
int summaArray(int mast[]);
int sumMinus(int minusum[]);
int maxElem(int elem[]);
int minElem(int elem[]);
int randomArray(int elem[]);

int main()
{	
	setlocale(LC_ALL, "rus");
	//Объявление переменной массива
	int massive[SIZE];

	//обнуление всех элементов массива 
	for (int i = 0; i < SIZE; i++)
		massive[i] = 0;
	cout << massive[1] << endl; // элементы обнуленый

	//эксперименты с отдельными элементами
	massive[0] = 123;
	*massive += 2;

	cout << massive[0] << endl;
	massive[SIZE - 1] = 444; //massive минус 1 элемент из SIZE
	*(massive + SIZE - 1) *= 2;	
	cout << massive[SIZE - 1] << endl;
	printArray(massive); // передача функции
	intArray(massive);
	printArray(massive);
	summaArray(massive);
	sumMinus(massive);
	maxElem(massive);
	minElem(massive);
	randomArray(massive);
	return 0;
}

void printArray(int mass[SIZE]) // название mass произвольное
{
	for (int i = 0; i < SIZE; i++)
		cout << mass[i] << " ";
	cout << endl;
}

void intArray(int well[SIZE]) //фукнция ввода поэлементного ввода массива
{
	cout << "Ввод массима поэлементно" << endl;
	for (int k = 0; k < SIZE; k++)
		cin >> well[k];
	cout <<  endl;
}
//Найти сумму всех элементов
int summaArray(int mast[])
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		sum += mast[i];
	cout << sum << endl;
	return sum;
}
//Найти сумму всех отрицательных элементов
int sumMinus(int minusum[])
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		if (minusum[i] < 0)
			sum += minusum[i];
	cout << sum << endl;
	return sum;
}
// Номер и значение максимального элемента массива
int maxElem(int elem[])
{
	int max_i, max;
	max = elem[0];
	max_i = 0;
	for (int i = 0; i < SIZE; i++)
		if (elem[i] > max) {
			max = elem[i];
			max_i = i;
		}
	cout << "MAX ELEM: " << max << endl; // Максимальный элемент в массиве
	cout << "MAX NUM ELEM: " << max_i << endl; // Номер максимального элемента в массиве
	return 0;
}

// Номер и значение минимального элемента массива
int minElem(int elem[])
{
	int min, min_i;
	min = elem[0];
	min_i = 0;
	for (int i = 0; i < SIZE; i++)
		if (elem[i] < min)
		{
			min = elem[i];
			min_i = i;
		}
	cout << "MIN ELEM: " << min << endl;
	cout << "MIN NUM ELEM: " << min_i << endl;
	return 0;
}
// Набор случайных чисел в массиве 
int randomArray(int elem[])
{
	int randomDigits[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		randomDigits[i] = rand();
		cout << randomDigits[i]<< endl;
	}
	return 0;
}