/* to find an array element
 * by Sivakami, august 2014 */
#include <stdio.h>

int main(void)
{
	int len;
	int find_val;
	int j;
	int k;
	_Bool isFound="false";
	
	/* to get the length of the array */
	printf ("Length of the array:");
	scanf ("%i", &len);
	
	int a[len];
	
	/*to get the array elements one by one */
	printf("Enter the array data:");
	for(j=0;j<len;j++){
		scanf("%i",&a[j]);
	}
	
	/* enter the elemnt to found in the array */
	printf ("Enter the value to found in the array:");
	scanf ("%i", &find_val);
	
	/* checking for the array element and to print as present or not present */
	
	for(j=0;j<len;j++){
		if(find_val==a[j]){
			isFound="true";
			printf("\nThe value %i is found at the array position %i", find_val,j);				
		}
	}
	if(!isFound){
		printf("Value not found");
	}

	return 0;
}

