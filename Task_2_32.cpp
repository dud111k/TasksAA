// Task_2_32.cpp: определяет точку входа для приложения.
//

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
	cout << number_start << endl;
	return 0;
}
