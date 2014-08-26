/* to find the value of the given expression
 * by Sivakami, august 2014 */
 
#include <stdio.h>
#include <math.h>

int main(void)
{
	float x;
	float result;
	int y=-6;
	int z=-7;
	int k=-8;
	int j=10;
	result=(3.31 * pow(j,k) * 2.01 * pow(j,z)) / (7.16 * pow(j,y) + 2.01 * pow(j,k));

	
	/* the expression result is */
	printf ("The corresponding result for the expression(3.31 x 10-8 x 2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8) is %e",result);
	
	return 0;
}
