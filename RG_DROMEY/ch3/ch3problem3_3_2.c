/* Finding the Greatest Common Devisor not using mod or division of an integer
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	int gcdDiv(int n1, int n2);
	int num1, num2, gcd;
	printf("Enter the numbers to find its Greatest Common Devisor: ");
	scanf("%i",&num1);
	scanf("%i",&num2);
	if(num1 > num2){
		gcd = gcdDiv(num1, num2);
	}else{
		gcd = gcdDiv(num2, num1);
	}
	printf("\nThe Greatest Common Devisor of num %i mod %i is %i",num1, num2, gcd);
	return 0;
}

int gcdDiv(int n1, int n2){	
	int gcd;
	int r = 1, val = 1;
	printf("\n%i mod %i",n1, n2);
	for(r = 1; val < n1; r++){
		val = n2 * r;
		//printf("\n%i val; %i r",val, (n1-val));
		if(val == n1){
		//printf("\n-----------------%i",r);
			return n2;
		}else if( (n1-val) < 0){
		//printf("\n%i val; %i (val-n2)",val, (n1-(val-n2)));
			int modval = (n1-(val-n2));
			n1 = gcdDiv(n2, modval);
		}
	}
	gcd = n1;
	return gcd;
}

