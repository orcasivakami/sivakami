/* This program is to update the time by one second
 *  by Sivakami, august 2014 */
 
#include <stdio.h>
#include <stdbool.h>
 
struct time
{ 		
	int hr;
	int min;
	int sec; 		
};

//structure to find the next day 	
struct time updatetime(struct time now)
{
	++now.sec;
 	
 	if(now.sec==60)
 	{
 		now.sec=0;
 		++now.min;
 	
 		if(now.min==60){
 			now.min=0;
 			++now.hr;
 		}
 	
	 	if(now.hr==24){
 			now.hr=0;
 		}
 	}
 	
 	return now;	
};

int main(void)
{
 	struct time update(struct time now);
 	struct time currenttime, nexttime;
 	
 	printf("Enter current (hh:mm:ss):");
 	scanf("%i:%i:%i",&currenttime.hr,&currenttime.min,&currenttime.sec);
 	
  	nexttime=updatetime(currenttime);
  	
  	printf("Updated time is %.2i:%.2i:%.2i",nexttime.hr,nexttime.min,nexttime.sec);
 	
 	return 0; 	
}
 
