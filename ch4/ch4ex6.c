/* to find the value of the given expression
 * by Sivakami, august 2014 */
 
#include <stdio.h>
#include<math.h>

int main(void)
{
	float x;
	double result;
	
	/* enter the value of x */
	printf ("enter the value of x for the expression(3x^3 - 5x^2 + 6):");
	scanf ("%f", &x);
	
	double x3=pow(x,3);
	double x2=pow(x,2);
	result=(3*x3)-(5*x2)+6;	
	
	/* the expression result is */
	printf ("The x value %f and its corresponding result for the expression(3x^3 - 5x^2 + 6) is %f",x,result);
	
	return 0;
}

