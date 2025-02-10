// Дана длина ребра куба. Найти объем куба и площадь его боковой поверхности.

#include "iostream"
#include "math.h"
using namespace std;

int main(int argc, char* argv[])
{
	double side_l = atof(argv[1]);
	double cube_v;
	double cube_s;
	setlocale(0, "");
	cout << "Длина ребра куба: " << argv[1] << endl;
	cube_v = pow(side_l, 3);
	cube_s = 4 * pow(side_l, 2);
	cout << "Площадь куба равна " << cube_s << " кв. см." << endl;
	cout << "Объём куба равен " << cube_v << " куб. см." << endl;
	return 0;
}
