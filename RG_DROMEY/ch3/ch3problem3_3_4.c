/* Finding the Greatest Common Divisor of an integer removing multiples of 2
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	int gcdDiv(int n1, int n2);
	int num1, num2, gcd;
	printf("Enter the numbers to find its Greatest Common Divisor: ");
	scanf("%i",&num1);
	scanf("%i",&num2);
	if(num1 > num2){
		gcd = gcdDiv(num1, num2);
	}else{
		gcd = gcdDiv(num2, num1);
	}
	printf("\nThe Greatest Common Divisor of num %i mod %i is %i",num1, num2, gcd);
	return 0;
}

int gcdDiv(int n1, int n2){	
	int gcd;
	int r = 0;
	int k = 1;
	if(n1 % 2 == 0 && n2 % 2 == 0){
		k = 2;
		n1 = n1 / 2;
		n2 = n2 / 2;
	}
	do{
		r = n1 % n2;
		printf("\n%i mod %i = %i",n1, n2, r);
		n1 = n2;
		n2 = r;		
	}while(r != 0);
	gcd = n1 * k;
	return gcd;
}

