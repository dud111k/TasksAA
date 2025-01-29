// Дана длина ребра куба. Найти объем куба и площадь его боковой поверхности.

#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	double cube_side;
	double cube_v;
	double cube_s;
	setlocale(0, "");
	cout << "Введите длину ребра куба: ";
	cin >> cube_side;
	cube_v = pow(cube_side, 3);
	cube_s = 4 * pow(cube_side, 2);
	cout << "Площадь куба равна " << cube_s << " куб. см." << endl;
	cout << "Объём куба равен " << cube_v << " куб. см." << endl;
	return 0;
}
