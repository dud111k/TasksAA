// Task_3_18.cpp: определяет точку входа для приложения.
//Вычислить значение логического выражения при всех возможных значениях логических величин А и В :
// а) не А и не В или А;
// б) В или не А и не В;
// в) В и не(А и не В).

#include "Task_3_18.h"

using namespace std;

bool a_first(bool X, bool Y) {
	return !(X && !Y) || X;
}

bool b_second(int X, int Y) {
	return Y && !X || !Y;
}

bool c_third(bool X, bool Y) {
	return !Y && !X || Y;
}


int main()
{
	setlocale(0, "");
	for (int i = 0; i <= 1; i++) {
		for (int j = 0; j <= 1; j++) {
			cout << "X =" << i << endl;
			cout << "Y =" << j << endl;
			cout << "Значение для а) = " << a_first(i, j) << endl;
			cout << "Значение для б) = " << b_second(i, j) << endl;
			cout << "Значение для в) = " << c_third(i, j) << endl;
		}
	}
	return 0;
}
