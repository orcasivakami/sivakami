/* to convert Fahrenheit (F) to Celsius (C)
 * by Sivakami, august 2014 */
 
#include <stdio.h>

int main(void)
{
	float fahrenheit_degree;
	float celsius_degree;
	
	/* enter the F degree */
	printf ("enter the Fahrenheit degree:");
	scanf ("%f", &fahrenheit_degree);
	
	celsius_degree=(fahrenheit_degree-32)/1.8;	
	
	/* the celcius value */
	printf ("The fahrenheit value %f and its corresponding celsius value is %f",fahrenheit_degree,celsius_degree);
	
	return 0;
}

