/* Function to concatenate two character arrays
*  by Sivakami, Aug 2014
*/

#include <stdio.h>

void concat(char result[], const char str1[], const char str2[])
{
	int i, j;
	
	// copy str1 to result
	for ( i = 0; str1[i] != '\0'; ++i ){
		result[i] = str1[i];
	}
	
	// copy str2 to result
	for ( j = 0; str1[j] != '\0'; ++j ){
		result[i + j] = str2[j];
	}
	
	result[ i + j]  = '\0';
}

int main(void)
{
	void concat (char result[], const char str1[], const char str2[]);
	const char s1[] = { "Test "};
	const char s2[] = { "Works." };
	char s3[20];
		
	concat (s3, s1, s2);
	
	printf ("Concatenation of string 1 and string 2\n");
	printf ("%s\n", s3);
	
	return 0;
}

