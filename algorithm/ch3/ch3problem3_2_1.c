/* Finding the Smallest exact divisor of an integer
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	int smallestDiv(int n);
	int squareRoot(int n);
	int num;
	printf("Enter the number to find its smallest exact divisor: ");
	scanf("%i",&num);
	int s = smallestDiv(num);
	printf("\nthe smallest exact divisor of num %i is %i",num, s);
	return 0;
}

int smallestDiv(int n){	
	int divisor;
	if(n%2 == 0){
		divisor = 2;	
	}else{
		int sq = squareRoot(n);
		int div = 3;
		//printf("\nN: %i SQ: %i DIV: %i",n, sq, div);
		while(n % div != 0 && div<sq){
			div = div+2;
			//printf("\n div %i  MODULE: %i ", div, (n % div));
		}
		if( n % div == 0){
			divisor = div;
		}else{
			divisor = 1;
		}
	}
	return divisor;
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

