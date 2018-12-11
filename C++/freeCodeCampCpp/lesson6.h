#include <iostream>

using namespace std;

void userInput()
{
	/*int age;
	cout << "Enter you age: " << endl;
	cin >> age;
	cout << "You are " << age << " years old." << endl;*/

	string name;
	cout << "Enter your name: " << endl;
	getline(cin, name);		/* taking entire line, via stdin, storing in variable name */
	cout << "You are " << name << endl;
}
