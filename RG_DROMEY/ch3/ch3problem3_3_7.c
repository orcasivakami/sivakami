/*	adding of two fractions using gcd for denominator
	by R.Sivakami, Oct 2014
*/
#include<stdio.h>
#include<math.h>
int main(){
	int gcdDiv(int n1, int n2);
	int addingFractions(int nnum1,int dnum1,int nnum2,int dnum2, int gcd);
	int numerator_num1;
	int denominator_num1;
	int numerator_num2;
	int denominator_num2;
	
	printf("Enter the first number's numerator: ");
	scanf("%i",&numerator_num1);
	printf("Enter the first number's denominator: ");
	scanf("%i",&denominator_num1);
	printf("Enter the second number's numerator: ");
	scanf("%i",&numerator_num2);
	printf("Enter the second number's denominator: ");
	scanf("%i",&denominator_num2);

	printf("The sum of the fraction numbers(%i/%i)+(%i/%i): ",numerator_num1,denominator_num1,numerator_num2,denominator_num2);
	int gcd = gcdDiv(denominator_num1, denominator_num2);
	printf("\nThe Greatest Common Divisor of num %i mod %i is %i",denominator_num1, denominator_num2, gcd);
	addingFractions(numerator_num1,denominator_num1,numerator_num2,denominator_num2, gcd);
	return 0;
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

int addingFractions(int nnum1,int dnum1,int nnum2,int dnum2, int gcd){
	float multiply1 ;
	float multiply2;
		float add1;
	float add2;
	printf("\ngcd:%i",gcd);
	if(dnum1 > gcd && gcd != 1){
		multiply1 = ( 1 / (float) dnum1 ) *  (float) gcd;
		add1 = nnum1 * multiply1;
	}else{
		multiply1 = dnum1 / gcd;
		add1 = nnum1 * multiply1;
	}
	if(dnum2 > gcd && gcd != 1){
		multiply2 = ( 1 / (float) dnum2 ) * (float) gcd;
		add2 = nnum2 * multiply2;
	}else{
		multiply2 = dnum2 / gcd;
		add2 = nnum2 * multiply2;
	}
	printf("\nmultiply1:::::%f\tmultiply2:::::%f",multiply1, multiply2);
	float sum;
	if(gcd == 1){
		 sum = ((nnum1 * dnum2)+(nnum2 * dnum1))/(dnum1*dnum2);
	}else{
		sum = (add1+add2)/gcd;
	}
	
	printf("\nmultiply1:%f\tmultiply2:%f\tadd1:%f\tadd2:%f\tsum:%f",multiply1, multiply2, add1, add2, sum);
	return sum;
}
