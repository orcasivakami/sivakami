/* Finding all common prime divisors of 2 numbers
   by R.Sivakami, Oct 2014
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
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
	bool primeNum(int num);
	int gcd;
	int r = 0;
	do{
		r = n1 % n2;
		printf("\n%i mod %i = %i",n1, n2, r);
		n1 = n2;
		n2 = r;		
		printf("\n%i is a prime %i", n1, primeNum(n1));
	}while(r != 0);
	gcd = n1;
	return gcd;
}

bool primeNum(int num){
	int squareRoot(int n);
	int sq = squareRoot(num);
	int n = 1;
	int prime = 0;
	bool val;
	for(n = 1; n <= sq; n++){
		if(num % n == 0){
			prime++;
		//	printf("\n%i %i %i %i %i", num, n, sq, num % n, prime);
		}
	}
	if(prime == 1){
		val = true;
	}else{
		val = false;
	}
	return val;
}

int squareRoot(int n){
	float g2 = n/2;
	float g1 = n/2;
	int i=0;
	do{
		if(g1>0 && g2>0){
			g1 = g2;
			g2 = ( g1 + ( n / g1) ) / 2;
		}
	}while((g1 - g2) != 0.0000);
	int sq = ceil(g2);
	//printf("\nthe square value of %i is %f",sq, ceil(g2));
	return sq;
}

