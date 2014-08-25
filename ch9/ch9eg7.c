/* This program is to about structures and arrays
 *  by Sivakami, august 2014 */
 
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
 	int i;
	
	struct month{
		int numberOfDays;
		char name[3];
	}; 	
	
	const  struct month months[12]={{31,{'j','a','n'}}, {28,{'f','e','b'}}, {31,{'m','a','r'}}, {30,{'a','p','r'}}, {31,{'m','a','y'}}, 
	{30,{'j','u','n'}}, {31,{'j','u','l'}}, {31,{'a','u','g'}}, {30,{'s','e','p'}}, {31,{'o','c','t'}}, {30,{'n','o','v'}}, {31,{'d','e','c'}}};
 	
	printf("Month    Number of Days\n");
	printf("-----    --------------\n");
	 
	for(i=0; i<12; i++)
	 	printf("%c%c%c      %i\n",months[i].name[0],months[i].name[1],months[i].name[2],months[i].numberOfDays);	
		 
 	return 0; 	
}
 
