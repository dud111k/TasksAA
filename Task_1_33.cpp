// Task_1_33.cpp: определяет точку входа для приложения.
//

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
