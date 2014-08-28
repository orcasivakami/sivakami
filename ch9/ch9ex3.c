/* to calculate the total time between 2 given time
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>
 
struct time
{ 		
	int hr;
	int min;
	int sec; 		
};

struct time elapsed_time(struct time start, struct time end)
{	
	struct time bwtime;
	int first = ( start.hr * 60 * 60 ) + ( start.min * 60 ) + start.sec;
	int last = ( end.hr * 60 * 60 )+ ( end.min * 60 ) + end.sec;
	int sec;
	
	if(start.hr < end.hr && end.hr < 24){
		sec = last - first;
	}else{
		first = 86400 - first;
		sec = first + last;
	}
	
	bwtime.sec = sec % 60;
	bwtime.min = sec / 60;
	bwtime.hr = bwtime.min / 60;
	bwtime.min = bwtime.min - ( bwtime.hr * 60 );
					
	return bwtime;
}
int main(void)
{
	struct time elapsed_time(struct time start, struct time end);
	struct time first, last, total;
	
	printf("Enter the first time(hh:mm:ss) 24 hr format:");
 	scanf("%i:%i:%i", &first.hr, &first.min, &first.sec);
	
	printf("Enter the second time(hh:mm:ss) 24 hr format:");
 	scanf("%i:%i:%i", &last.hr, &last.min, &last.sec);
 	
 	if((first.hr < 24) && (last.hr < 24) && (last.min < 60) && (first.min < 60) && (last.sec < 60) && (first.sec < 60)){
 		total = elapsed_time( first, last );
 		printf("The total time is(hh:mm:ss): %ihrs %imin %isec ", total.hr, total.min, total.sec);
  	}else{
 		printf("Enter the correct time format.");
 	} 
	 		
	return 0;
}

