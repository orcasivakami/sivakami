/*	testing Fibonacci number series for its gcd
	by R.Sivakami, Oct 2014
*/
#include<stdio.h>
#include<math.h>
int main(){
	void fibonacciGen(int n1, int n2, int len, int fibonacci[]);
	int gcdDiv(int n1, int n2);
	int num1;
	int num2;
	int len;
	int i = 0;
	
	printf("Enter the numbers(for showing upto n the Fibonacci series): ");
	scanf("%i",&len);
	printf("Enter the starting number of fibonacci series: ");
	scanf("%i",&num1);
	printf("Enter the second number of fibonacci series: ");
	scanf("%i",&num2);
	
	int fibonacci[len];
	int gcd[len];
	printf("The fibonacci series is:  ");
	fibonacciGen(num1, num2, len, fibonacci);	
	
	for(i = 0; i < len; i++){
		printf("%i   ",fibonacci[i]);
	}
	
	
	for(i = 0; i < (len-1); i++){
		if(fibonacci[i] > 0 && fibonacci[i+1] > 0){
			gcd[i] = gcdDiv(fibonacci[i+1], fibonacci[i]);
		}
		printf("\nThe Greatest Common Divisor of num %i mod %i is %i",fibonacci[i], fibonacci[i+1], gcd[i]);
	}
	
	return 0;
}

void fibonacciGen(int n1, int n2, int len, int fibonacci[]){
	int i = 0;
	int sum = 0;
	fibonacci[0] = n1;
	fibonacci[1] = n2;
	for(i = 2; i < len; i++){
		sum = n1 + n2;
		fibonacci[i] = sum;
		n1 = n2;
		n2 = sum;
	}
}

int gcdDiv(int n1, int n2){	
	int gcd;
	int r = 0;
	do{
		r = n1 % n2;
		//printf("\n%i mod %i = %i",n1, n2, r);
		n1 = n2;
		n2 = r;		
	}while(r != 0);
	gcd = n1;
	return gcd;
}

