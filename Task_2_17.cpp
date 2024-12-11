// Task_2_17.cpp: определяет точку входа для приложения.
// Дано трехзначное число. Найти число, полученное при перестановке второй и
// третьей цифр заданного числа.

#include "Task_2_17.h"
#include "iostream"
using namespace std;

int main()
{
	setlocale(0, "");
	int number;
	int n1;
	int n2;
	int n3;
	setlocale(0, "");
	cout << "Введите число:";
	cin >> number;
	n1 = number / 100;
	n3 = number % 10;
	n2 = number - n1 * 100 - n3;
	number = n1 * 100 + n3 * 10 + n2 / 10;
	cout << "Новое число:" << number << endl;
	return 0;
}
