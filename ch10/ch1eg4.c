/* Function to check if 2 string are equal
*  by Sivakami, Aug 2014
*/

#include <stdio.h>
#include <stdbool.h>

bool equalstrings(const char s1[], const char s2[])
{
	int i=0;
	bool areEqual;
	
	while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
		++i;
	}
	
	if( s1[i]== '\0' && s2[i]== '\0' ){
		areEqual = true;
	}else{
		areEqual = false;
	}
		
	return areEqual;
}

int main(void)
{
	bool equalstrings(const char str1[], const char str2[]);
	const char s1[] = "Comparing String ";
	const char s2[] = "String";
	
	printf ("Comparing of string 1 and string 2 %i",equalstrings(s1,s2));
	printf ("\nComparing of string 1 and string 2 %i",equalstrings(s2,"String"));
	
	return 0;
}

