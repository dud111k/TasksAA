// Task_4_16.cpp: определяет точку входа для приложения.
/*
Известны площади круга и квадрата. Определить:
а) уместится ли круг в квадрате?
б) уместится ли квадрат в круге?*/

#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

void SquareInCircle(double circles, double squares) {
	if (sqrt(circles / M_PI) >= sqrt(2 * squares)) { cout << "б) Квадрат умещается в круг." << endl; }
	else { cout << "б) Квадрат не умещается в круг." << endl; }
}

void CircleInSquare(double circles, double squares) {
	if (sqrt(squares) >= sqrt(circles / M_PI)) { cout << "а) Круг умещается в квадрат" << endl; }
	else { cout << "а) Круг не умещается в квадрат." << endl; }
}


int main()
{
	setlocale(0, "");
	double circles;
	double squares;
	cout << "Введите площадь круга: ";
	cin >> circles;
	cout << "Введите площадь квадрата: ";
	cin >> squares;
	SquareInCircle(circles, squares);
	CircleInSquare(circles, squares);
	
	return 0;
}
