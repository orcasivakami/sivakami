/* to calculate the hours,minutes,seconds from the given seconds
* by Sivakami, August 2014
*/

#include <stdio.h>

int calculatetime(int s){
	
	int sec = s % 60;
	int min = s / 60;
	int hr = min / 60;
	min = min-(hr*60);
	if(hr>=24){
		int day=hr/24;
		hr=hr-(day*24);
		printf("the day and hour for the given second is %iday %ihr %imin %isec",day,hr,min,sec);
	}else{
		printf("the hour for the given second is %ihr %imin %isec",hr,min,sec);	
	}
		
	return hr;
}

int main(void)
{
	int calculatetime(int s);
	int sec;
	int hr;
	
	printf("Enter the second: ");
	scanf("%i",&sec);
	
	calculatetime(sec);
	
	return 0;
}

