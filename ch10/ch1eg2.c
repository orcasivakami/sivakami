/* Function to conutn the total length of character in a string
*  by Sivakami, Aug 2014
*/

#include <stdio.h>

int stringLength(const char str[])
{
	int count=0;
	
	while(str[count] != '\0') {
		count++;
	}
	
	return count;
}

int main(void)
{
	int stringLength(const char str[]);
	const char word1[] = { 'T', 'e', 's', 't', '\0'};
	const char word2[] = { 'w', 'o', 'r', 'k', 's', '\0' };
	
	printf("The length of the strings are %i %i .",stringLength(word1),stringLength(word2));	
	
	return 0;
}

