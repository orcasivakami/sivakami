/* to find the value of the given expression
 * by Sivakami, august 2014 */
 
#include <stdio.h>
#include <math.h>

int main(void)
{
	float x;
	double result;

	result=(3.31 * pow(10,-8) * 2.01 * pow(10,-7)) / (7.16 * pow(10,-6) + 2.01 * pow(10,-8));
	
	/* the expression result is */
	printf ("The corresponding result for the expression(3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8) is %f",result);
	
	return 0;
}
