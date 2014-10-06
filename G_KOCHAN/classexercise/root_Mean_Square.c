/* to find root mean square
   by R.Sivakami, Sep 14
*/

#include<stdio.h>
#include <math.h>

int main(void)
{
	int len;
	int j;
	int squaresum;
	float mean, root;
	
	/* to get the length of the array */
	printf ("Length of the array:");
	scanf ("%i", &len);
	
	int a[len];
	int sqarerootSum(int a[], int len);
	
	/*to get the array elements one by one */
	printf("Enter the array element(upto length %i):",len);
	for(j=0;j<len;j++){
		scanf("%i",&a[j]);
	}
	
	squaresum = sqarerootSum(a, len);
	
	mean = squaresum/len;
	root = sqrt(mean);

	printf("The sum of the square of the array %i\nTheir mean is %f\nTheir square root is %f",squaresum, mean, root);
	return 0;
}

int sqarerootSum(int a[], int len){
	int sum = 0;
	int j;
	for(j=0;j<len;j++){
		sum += pow(a[j],2);
	}
	return sum;
}
