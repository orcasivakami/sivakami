/* Finding the Smallest exact divisor of an integer
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	void smallestDiv(int n);
	int squareRoot(int n);
	int num;
	printf("Enter the number to find its divisor: ");
	scanf("%i",&num);
	smallestDiv(num);
	return 0;
}

void smallestDiv(int n){	
	int divisor;
	int div = 2;
	int sq = squareRoot(n);
	for(div = 2; div<sq; div++){
		//printf("\nN: %i SQ: %i DIV: %i",n, sq, div);
		if(div % 2 == 0 && n % div == 0){
			printf("\nMultiplication of 2: %i  is a factor of %i", div, n);
		}else if(div % 3 == 0 && n % div == 0){
			printf("\nMultiplication of 3: %i  is a factor of %i", div, n);
		}else if(n % div == 0){
			printf("\nOther Factors: %i  is a factor of %i", div, n);
		}

	}
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

