/* function to convert string to integer
* by Sivakami, August 2014
*/

#include <stdio.h>

int main(void)
{
	int strToInt(const char string[]);
	
	printf("%i\n",strToInt("525"));
	printf("%i\n",strToInt("135") + 25);
	printf("%i\n",strToInt("13x5"));
	return 0;
}

int strToInt(const char string[])
{
	int result=0;
	int j;
	int intValue;
	
	for( j = 0; string[j] >= '0' && string[j] <= '9'; j++){
		intValue = string[j] - '0';
		result = result * 10 + intValue;
	}
	return result;
}

