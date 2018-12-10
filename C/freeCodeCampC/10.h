#include <stdio.h>
#include <stdlib.h>

void workingWithIfStatements()
{
	int max_number(int x, int y)
	{
		if (x > y)
		{
			return x;
		}
		else
		{
			return y;
		}
	}
	printf("\nOf %d and %d, %d is the larger number\n", 5, 15, max_number(5, 15));

	int largest_of_three(int x, int y, int z)
	{
		if (x >= y && x >= z)
		{
			return x;
		}
		else if (y >= x && y >= z)
		{
			return y;
		}
		else
		{
			return z;
		}
	}
	printf("Of %d, %d and %d, %d is the largest number\n", 5, 15, 7, largest_of_three(5, 15, 7));
}
