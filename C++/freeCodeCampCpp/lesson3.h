#include <iostream>
using namespace std;

void workingWithVariables()
{
	string name = "George";		/* C++ has string type, unlike C */
	int age = 70;

	cout << "There was once a man named " << name << endl;
	cout << "He was " << age << " years old."     << endl;

	name = "John";		/* redefining the variable */

	cout << "He liked name " << name 			  << endl;
	cout << "but did not like being " << age 	  << endl;

	/* data types */
	char grade = 'A';
	double gpa = 3.9;
	float height = 1.83;
	string language = "C++";
	int hours = 24;
	bool isOld = true;
}
