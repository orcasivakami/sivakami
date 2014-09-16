/* to find CGPA Calculatio
   by R.Sivakami, Sep 14
*/

#include<stdio.h>

int main(void)
{
	int len;
	int j,i;
	float totalSum = 0.0;
	int totalCredits = 0;
	float avg;
	
	/* to get the length of the array */
	printf ("Enter the total number of courses:");
	scanf ("%i", &len);
	
	int weight[len];
	char grade[len];
	int gradeint[len];
	
	/*to get the array elements one by one */
	printf("Enter the garde and weight of each course one by one(seperted by space):");
	for(j=0;j<len;j++){
		scanf("%i %i",&gradeint[j], &weight[j]);
	}
	
	for(i=0;i<len;i++){
		totalCredits += weight[i];
		totalSum += gradeint[i]*weight[i];
	}
	
	//printf("%f %i",totalSum, totalCredits);
	avg = (totalSum / totalCredits) * 10;
	printf("The percentage of your score %.2f",avg);
	
	return 0;
}

