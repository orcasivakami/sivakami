/* This program adds two integer values and displays the results 
 *  by Sivakami, august 2014 */
 
#include <stdio.h>

int main(void)
{
	/* declare variables */
	int value1;
	int value2;
	int sum;
	
	/* assign values and calculate their sum */
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;
	
	/*display the result*/
	printf("The sum of %i and %i is %i\n", value1, value2, sum);
	
	return 0;
}
