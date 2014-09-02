/* function to convert string to integer for negative values
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int strToInt(const char string[]);
	
	printf("%i\n",strToInt("-525"));
	printf("%i\n",strToInt("-135") + 25);
	printf("%i\n",strToInt("13x5"));
	return 0;
}

int strToInt(const char string[])
{
	int result=0;
	int j;
	int intValue;
	bool positiveVal = true;
	if(string[0] != '-'){
		 positiveVal = true;		 
		 j = 0;
	}else{
		positiveVal = false;
		j = 1;
	}
	for( ; string[j] >= '0' && string[j] <= '9'; j++){
		intValue = string[j] - '0';
		result = result * 10 + intValue;				
	}
	if(positiveVal){
		return result;
	}else{
		return -result;
	}
}

