/* Finding all the divisor of an integer
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	void allDivisor(int n);
	int squareRoot(int n);
	int num;
	printf("Enter the number to find its smallest exact divisor: ");
	scanf("%i",&num);
	allDivisor(num);
	return 0;
}

void  allDivisor(int n){		
	int divisor;
	int sq = squareRoot(n);
	int div = 2;
	printf("\nthe divisor value of %i is",n);
	for(div = 2; div < sq; div++){
		if( n % div == 0){
			divisor = n/div;
			printf("\n%i * %i", divisor, div);
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

