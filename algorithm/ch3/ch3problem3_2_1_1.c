/* Finding the Smallest exact divisor of an integer not using squareroot explicitly
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	int smallestDiv(int n);
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
		int sq = ceil(pow(n,0.5));
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

