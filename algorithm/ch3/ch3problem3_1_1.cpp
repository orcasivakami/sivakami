/* Finding the Square Root of a number
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
int main(){
	float squareRoot(int n);
	int num;
	printf("Enter the number to find its square root");
	scanf("%i",num);
	float s = squareRoot(num);
	return 0;
}

float squareRoot(int n){
	float g2 = n/2;
	float g1 = n/2;
	do{
	
	do{
	
		g1=g2;
		g2=(g1+( n / g1))/2;
	}
	while((( g2 * g2 - n ) <= ( g1 * g1 - n )) && (g1 > 0 ) && (g2 > 0));
	}while(g2 != g1);
	float square = g2;
	return square;
}

