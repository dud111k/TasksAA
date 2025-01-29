
/* Записать условие, которое является истинным, когда:
а) целое А кратно двум или трем;
б) целое А не кратно трем и оканчивается нулем.
*/

#include <iostream>
#include <string>

using namespace std;

bool testOne(int x)
{
	if (x % 2 == 0 || x % 3 == 0) { return true;}
	else { return false; }
}

bool testTwo(int x) {
	if (x % 10 == 0 && x % 3 != 0) { return true;}
	else { return false;}
}

int main()
{
	int number;
	cout << "Enter number: ";
	cin >> number;
	cout << "a) " << testOne(number) << endl;
	cout << "b) " << testTwo(number) << endl;

	return 0;
}
