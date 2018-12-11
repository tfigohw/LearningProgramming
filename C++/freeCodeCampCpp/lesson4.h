#include <iostream>
using namespace std;

void workingWithStrings()
{
	string phrase = "Giraffe Academy";

	cout << phrase.length() << endl;		/* string length */
	cout << phrase[5] 		<< endl;		/* iterating through the string */

	phrase[0] = 'B';		/* reassigning the first letter */
	cout << phrase 			<< endl;

	cout << phrase.find("Acad") << endl;		/* finding a substring and returning index; if not found, returns garbage value */
	cout << phrase.substr(0, 5) << endl;		/* substring starting at 0 and 5 chars long */
}
