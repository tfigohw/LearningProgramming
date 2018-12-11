#include <iostream>
#include <cmath>

using namespace std;

void workingWithNumbers()
{
	cout << 2+3 << ", " << 2*3 << ", " << 3%2 << ", " << " etc." << endl;

	int num = 10;
	num++;
	++num;
	num *= 10;
	cout << num << endl;

	cout << pow(2, 3) << endl;
	cout << sqrt(37) << endl;
	cout << round(3.37) << endl;
	cout << ceil(2.1) << endl;
	cout << floor(2.9) << endl;
}
