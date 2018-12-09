#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void workingWithNumbers()
{
	/* working with numbers */

	int num = 6;
	printf("%f\n", 8.9);
	printf("%f\n", 5 / 3.0);
	printf("%d\n", num % 3);
	printf("%f\n", pow(2,3)); 	/* power function from math.h*/
	printf("%f\n", sqrt(17));       /* same */
	printf("%f\n", ceil(17.1));     /* same */
	printf("%f\n", floor(16.91));   /* same */
}

void workingWithConstants()
{
	/* once defined, constants cannot be changed */

	const int NUM = 5; /* all-caps by convention */
	printf("%d\n", NUM);
}
