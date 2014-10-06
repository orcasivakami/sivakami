/* to get string input and to print the strings
* by Sivakami, August 2014
*/

#include <stdio.h>

int main(void)
{
	char s1[80], s2[80], s3[80];
	
	printf("Enter the string:");
 	scanf("%s %s %s", s1, s2, s3);
	
	printf("The strings are \ns1 = %s \ns2 = %s \ns3 = %s", s1, s2, s3);
	
	return 0;
}

