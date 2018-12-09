#include <stdio.h>
#include <stdlib.h>

void tellStory()
{
	/* Printing out a story and using variables and formatted print. */

	char characterName[] = "George"; /* array of chars plays the role of a string */
	int age = 30;

	printf("There once was a man named %s\n", characterName);
	printf("he was %d years old.\n", age);

	age = 50; /* modifying age */

	printf("He really liked the name %s\n", characterName);
	printf("but did not like being %d.\n\n", age);
}
