/* Finding the Square Root of a number
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>

int main(){
	float squareRoot(int n);
	int num;
	printf("Enter the number to find its square root: ");
	scanf("%i",&num);
	float s = squareRoot(num);
	printf("\nthe square root of num %i is %.2f",num, s);
	return 0;
}

float squareRoot(int n){
	float g2 = n/2;
	float g1 = n/2;
	int i=0;
	//printf("\nthe square values are g1 %f and g2 %f",g1, g2);	
	do{
		if(g1>0 && g2>0){
	
			g1 = g2;
			g2 = ( g1 + ( n / g1) ) / 2;
	//		printf("\nthe square values are g1 %f, and g2 %f, (g1-g2) %f",g1, g2,(g1-g2));
		}
	}while((g1 - g2) != 0.0000);
	//printf("\nthe square values are square %f",g2);
	return g2;
}

