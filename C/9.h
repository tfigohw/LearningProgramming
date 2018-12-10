#include <stdio.h>
#include <stdlib.h>

void workingWithFunctions()
{
	/* declaring a function */
	void say_hi()
	{
		printf("\nHi user\n");
	}

	/* calling the function */
	say_hi();

	/* function with arguments */
	void say_hello(char name[])
	{
		printf("Hello %s\n", name);
	}
	say_hello("John");
	say_hello("Jane");

	/* function returning a value
	 * Such functions have to be defined above main(), if in same file,
	 * or at least declared (i.e. without function body in {}), which is
	 * called 'prototyping'.
	 */
	double cubeNumber(double number)
	{
		return number*number*number;
	}
	printf("%5.3f", cubeNumber(2.3));
}
