#include <stdio.h>
#include <stdlib.h>

void workingWithArrays()
{
	int lucky_numbers[] = {1, 2, 3};
	printf("%d\n", lucky_numbers[0]); /* printing first element */
	lucky_numbers[0] = 10; 			  /* modifying first element */
	printf("%d\n", lucky_numbers[0]);
	int second_array[10]; 			  /* need to specify max size if not specifying elements */
	second_array[0] = 7;
	printf("%d\n", second_array[0]);
	printf("%d\n", second_array[1]);  /* prints garbage value, since it has not been assigned */
}
