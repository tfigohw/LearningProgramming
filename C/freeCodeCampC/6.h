#include <stdio.h>
#include <stdlib.h>

void basicCalculator()
{
	/* summing two numbers */
	double num1;
	double num2;

	printf("\nEnter first number: ");
	scanf("%lf", &num1);
	printf("Enter second number: ");
	scanf("%lf", &num2);
	printf("Answer: %f", num1+num2);
}
