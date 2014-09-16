// Function to concatenate two character arrays
#include <stdio.h>

void concat(char result[], const char str1[], int n1, const char str2[], int n2)
{
	int i, j;
	
	// copy str1 to result
	for ( i = 0; i < n1; i++ ){
		result[i] = str1[i];
			printf("%c  %c",str1[i],result[i]);
	}
	
	// copy str2 to result
	for ( j = 0; j < n2; j++ ){
		result[n1 + j] = str2[j];
	}
}
int main(void)
{
	void concat (char result[], const char str1[], int n1, const char str2[], int n2);
	char s1[5];
	char s2[6];
	char s3[11];
	int i;
	
	
	printf("Enter the first string to concat(length of 5) ");
	for ( i = 0; i < 6; i++ ){
		scanf("%c", &s1[i]);	
	}
	
	printf("Enter the second string to concat(length of 6) ");
	for ( i = 0; i < 7; i++ ){
		scanf("%c", &s2[i]);
	}
	
	printf("\n%c",s1[0]);
	
	concat (s3, s1, 5, s2, 6);
	
	for ( i = 0; i < 11; i++ ){
		printf ("%c", s3[i]);
	}
	printf ("\n");
	
	return 0;
}

