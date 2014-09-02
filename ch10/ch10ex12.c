/* function to convert string to float for all values
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	float strToFloat(const char string[]);
	
	printf("\n%f\n",strToFloat("-867.6921"));
//	printf("%i\n",strToFloat("-135.789") + 25);
//	printf("%i\n",strToFloat("13.14"));
	return 0;
}

float strToFloat(const char string[])
{
	float result = 0.0;
	float resultdec = 0.0 ;
	int j;
	float k = 1.0;
	float intValue,decVal;
	bool positiveVal = true;
	bool decPoint = false;
	if(string[0] != '-'){
		 positiveVal = true;		 
		 j = 0;
	}else{
		positiveVal = false;
		j = 1;
	}
	for( ; ((string[j] >= '0' && string[j] <= '9') || (string[j] == '.' )); j++){
		if(string[j] == '.'){
			decPoint = true;
			
		}else if(!decPoint){
			intValue = string[j] - '0';
			result = result * 10 + intValue;				
		}else if(decPoint){
			decVal = string[j] - '0';
			resultdec = resultdec + (decVal * 0.10 * k);
			k = k/10;
		
			//printf("\ninside this %c %f                       %f", string[j], decVal, resultdec+result);				
			
		}
	}
	result = resultdec+result;
	
	if(positiveVal){
		return (result);
	}else{
		return (result*-1);
	}
}

