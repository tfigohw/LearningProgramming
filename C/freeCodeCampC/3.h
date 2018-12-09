#include <stdio.h>
#include <stdlib.h>

void printVariables()
{
	/* looking at variable types and declarations, and printf: */
	int age = 40; 		/* integers */
	double gpa = 3.7;   	/* double-precision float */
	char grade = 'A';	/* single character inside single quotes */
	char name[] = "John";   /* string is an array of chars */

	printf("%s is %d years old\n", name, age);
	printf("He has a grade %c, with a GPA of %.1f\n\n", grade, gpa);
}
