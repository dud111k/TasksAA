// Task_1_33.cpp: определяет точку входа для приложения.
//Известны количество жителей в государстве и площадь его территории. Оп-
//ределить плотность населения в этом государстве.

#include "Task_1_33.h"

using namespace std;

int main()
{
	setlocale(0, "");
	int population;
	double area, density;
	cout << "Введите количество жителей государства: ";
	cin >> population;
	cout << "Введите площадь государства в кв. км: ";
	cin >> area;
	density = population / area;
	cout << "Плотность государства равна " << density << " чел. на кв. км." << endl;
	return 0;
}
