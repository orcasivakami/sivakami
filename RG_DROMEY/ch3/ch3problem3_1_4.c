/* Finding the Reciprocal of an Integer
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	float reciprocal(int n);
	float reciprocal1(int n);
	int num;
	printf("Enter the number to find its reciprocal: ");
	scanf("%i",&num);
	
	float s = reciprocal(num);
	printf("\nthe reciprocal of num %f", s);
	
//	float s1 = reciprocal1(num);
	//printf("\nthe reciprocal1 of num %i is %f",num, s1);
	return 0;
}

float reciprocal(int n){
	float val = (float) n;
	float num = 1/val;
	
	return num;
}


/*float reciprocal1(int n){
	int totaldigit = 2;
	float num1 = (float) (( n / 10)/pow(10,totaldigit));
	float num2 = (float) (pow(10,1)/(n % 10));
	//float num = 1/(float)n;
	printf("\nthe reciprocal of num %f  %f",num1, num2);
	return num1;
}
*/
