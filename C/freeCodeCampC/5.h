#include <stdio.h>
#include <stdlib.h>

void gettingUserInput()
{
	/* prompting user for input */

	double gpa;
	char grade;
	char name[20]; 		/* specifying minimum size */

	printf("Enter your GPA: ");
	scanf("%lf", &gpa);     /* lf for scan, f for print */
	getchar(); 		/* grabs newline character, otherwise, after hitting enter, second scanf reads newline as input */
	printf("Your GPA is %f.", gpa);

	printf("\nEnter your grade: ");
	scanf("%c", &grade);
	getchar();
	printf("Your grade is %c.", grade);

	/* scanf takes input up to the first space */
	/* use fgets -- gets whole line as a string */

	printf("\nEnter your name: ");
	fgets(name, 20, stdin); /* storage variable, char number, standard input */
	printf("Your name is %s", name);
}
