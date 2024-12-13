// Task_2_32.cpp: определяет точку входа для приложения.
//В трехзначном числе x зачеркнули его последнюю цифру. Когда в оставшемся двузначном числе переставили цифры, а затем приписали к ним слева послед-
//нюю цифру числа x, то получилось число 654. Найти число x.

#include "Task_2_32.h"

using namespace std;

int main()
{	
	int number = 654;
	int n1;
	int n2;
	int n3;
	int number_start;
	n1 = number / 100;
	n2 = number % 10;
	n3 = number - n1 * 100 - n2;
	number_start = n2 * 100 + n3 + n1;
	cout << "x = " << number_start << endl;
	return 0;
}
