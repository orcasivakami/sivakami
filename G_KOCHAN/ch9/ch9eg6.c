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
 	struct time testTimes[5]={{11,59,59},{ 12,0,0},{1,29,59},{23,59,59},{19,12,27}};
 	int i;
 	
 	for(i=0;i<5;i++){
 		printf("\nUpdated time is %.2i:%.2i:%.2i",testTimes[i].hr,testTimes[i].min,testTimes[i].sec);
 	
	 	testTimes[i]=updatetime(testTimes[i]);
		
		printf("....one second later it's is %.2i:%.2i:%.2i",testTimes[i].hr,testTimes[i].min,testTimes[i].sec);		 	
 	}
 	
 	return 0; 	
}
 
