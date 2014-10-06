/* Function to sum the elements of an integer array
*  by Sivakami, Sep 2014
*/
#include <stdio.h>
int arraySum(int array[], const int n)
{
	int sum = 0, *ptr;
	int * const arrayEnd = array + n;
	for( ptr = array; ptr < arrayEnd; ++ptr )
		sum += *ptr;
	
	return sum;
}
int main(void)
{
	int arraySum(int array[], const int n);
	int len;
	printf ("Enter the length of the array:");
	scanf ("%i", &len);
	int values[len];
	int j = 0;
	
	printf("Enter the array elements:");
	for(j=0;j<len;j++){
		scanf("%i", &values[j]);
	}
	printf("The sum is %i\n", arraySum (values, len));
	return 0;
}

