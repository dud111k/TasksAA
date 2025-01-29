// Дана длина ребра куба. Найти объем куба и площадь его боковой поверхности.

#include "iostream"
#include "math.h"
using namespace std;

int main(int argc, double argv[])
{
	double cube_v;
	double cube_s;
	setlocale(0, "");
	cout << "Длина ребра куба: " << argv[1] << endl;
	cube_v = pow(argv[1], 3);
	cube_s = 4 * pow(argv[1], 2);
	cout << "Площадь куба равна " << cube_s << " куб. см." << endl;
	cout << "Объём куба равен " << cube_v << " куб. см." << endl;
	return 0;
}
