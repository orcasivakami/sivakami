/* Further examples of pointers
*  by Sivakami, Sep 2014
*/

#include<stdio.h>

int main(void)
{
	char c =  'C';
	char *char_pointer = &c;
		
	printf("%c, %c\n", c ,*char_pointer);
	
	c = '/';
	printf("%c, %c\n", c ,*char_pointer);
	
	*char_pointer = '(';
	printf("%c, %c\n", c ,*char_pointer);
	return 0;
}

