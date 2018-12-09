#include <stdio.h>
#include <stdlib.h>

#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"

int main()
{
	/* main() function is the entry point for execution of all
	 * files in the project. There can be only one.
	 */

	void drawTriangle(), tellStory(), printVariables(), workingWithNumbers(), workingWithConstants();

	drawTriangle(); 	 /* calling drawTriangle() function */
	tellStory();    	 /* same */
	printVariables();   	 /* same */
	workingWithNumbers();	 /* same */
	workingWithConstants();  /* same */

	return 0;
}
