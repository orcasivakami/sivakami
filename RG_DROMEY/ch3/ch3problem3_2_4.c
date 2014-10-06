/* the integer in the range 1-100, finding the no. that has the most divisors
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	void allDivisor(int n);
	int num = 2;
	allDivisor(num);
	return 0;
}

void  allDivisor(int n){		
	int divisor;
	int div = 2;
	int val = 0;
	int numArray[99];
	for(n = 2; n < 100; n++){
		//printf("\nthe divisor value of %i is",n);
		val = 0;
		for(div = 2; div < 100; div++){
			if( n % div == 0 && div < n ){
				divisor = n/div;
				//printf("\t%i * %i", divisor, div);
				val++;
			}
		}
		numArray[n] = val;
	}
	for(n = 2; n < 100; n++){
		if(numArray[n] == 10){
			printf("\nthe number value %i which has most %i divisors.", n, numArray[n][1]);
		}
	}
}

