/* This program subtract two integer values and displays the results 
 *  by Sivakami, august 2014 */
 
#include <stdio.h>

int main(void)
{
	/* declare variables */
	int value1;
	int value2;
	int sum;
	
	/* assign values and calculate their difference */
	value1 = 15;
	value2 = 87;
	sum = value1 + value2;
	
	/*display the result*/
	printf ("The sum of %i and %i is %i\n", value1, value2, sum);
	
	return 0;
}
