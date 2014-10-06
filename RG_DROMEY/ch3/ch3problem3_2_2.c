/* Finding all the divisor of an integer
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	int allDiv(int n);
	int num;
	printf("Enter the number to find its smallest exact divisor: ");
	scanf("%i",&num);
	int s = allDiv(num);
	return 0;
}

int allDiv(int n){	
	int divisor = 1;
	printf("\n The NUMBER: %i can be divided by", n);	
	while(divisor < n){
		if(n % divisor == 0){
			printf("\tdivisor: %i ", divisor );	
		}
		divisor++;
	}
	return divisor;
}

