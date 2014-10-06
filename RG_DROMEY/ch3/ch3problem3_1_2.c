/* To find the geometric mean of n numbers
   by R.Sivakami, Oct 2014
*/

#include<stdio.h>
#include<math.h>
int main(){
	float geomeanRoot(int sum, int n);
	int totalarray(int meanarray[], int n);
	int totalnum;
	int i;
	printf("Enter the total number of elements: ");
	scanf("%i",&totalnum);	
	
	int gmarray[totalnum];		
	printf("Enter the elements one by one:\n");
	
	for(i=0; i < totalnum; i++){
		scanf("%i\n",&gmarray[i]);
	}

	int sum = totalarray(gmarray, totalnum);
	printf("\nthe sum is %i",sum);
	
	float s = geomeanRoot(sum, totalnum);
	
	printf("\nthe geomean of num %f",s);
	return 0;
}

int totalarray(int meanarray[], int n){
	int total = 1;
	int i = 0;
	for(i=0;i<n;i++){
		total *= meanarray[i];
	}
	return total;
}

float geomeanRoot(int sum, int n){
	float num = 1/(float)n;
	//printf("\nthe square root of num %f",num);
	float gm = pow(sum,num);
	//printf("\nthe square root of num %f",gm);
	return gm;
}

