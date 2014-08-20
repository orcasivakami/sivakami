#include <stdio.h>
int main (void)
{
	int len, find_val;
	int j,k;
	_Bool isFound="false";
	printf ("Length of the array:");
	scanf ("%i", &len);
	int a[len];
	printf("Enter the array data:");
	for(j=0;j<len;j++){
		scanf("%i",&a[j]);
	}
	printf ("Enter the value to found in the array:");
	scanf ("%i", &find_val);
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
