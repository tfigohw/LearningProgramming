#include <stdio.h>
#include <stdlib.h>

void betterCalculator()
{
	double num1;
	double num2;
	char op;
	double result;

	printf("Enter first number: ");
	scanf("%lf", &num1);
	printf("Enter operator: ");
	scanf(" %c", &op);				/* space before %c is required */
	printf("Enter second number: ");
	scanf("%lf", &num2);

	switch (op)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			goto label;
	}

	printf("Result: %f", result);

label: printf("Invalid input");
}
