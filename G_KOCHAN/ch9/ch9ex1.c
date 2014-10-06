/* This program is to find out the number of days between two dates
 *	with little modification in the program.
 *  by Sivakami, august 2014 */
 
#include <stdio.h>
#include <stdbool.h>
 
struct date
{ 		
	int day;
	int month;
	int year; 		
};

//structure to find the next day 	
int totalDays (struct date startDay, struct date endDay)
{
	int tomorrow;
	
 	int numberOfDays(struct date d, bool year); 	
 	bool isLeapYear(struct date d);
 	const int dayspermonth[12]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
 	
 	bool startyearLeap = isLeapYear(startDay);
 	bool endyearLeap = isLeapYear(endDay);
 	
 	printf("startyearLeap %i",startyearLeap);
 	printf("endyearLeap %i",endyearLeap);
 	
 	int starttotaldays;
 	if(isLeapYear(startDay) && startDay.month<=2){
 		dayspermonth[1]=29;
 		starttotaldays=dayspermonth[startDay.month]-startDay.day;
 	}else{
 		starttotaldays=dayspermonth[startDay.month]-startDay.day;
 	}
 	if(isLeapYear(endDay) && endDay.month<=2){
 		dayspermonth[1]=29;
 	}

  //	numberOfDays(startDay);
 //	numberOfDays(endDay);
 	
 	return tomorrow;	
};

//function to find the leap year 
bool isLeapYear(struct date d)
{
 	bool leapYearFlag;
 	
 	if( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
 		leapYearFlag = true;
 	else
 		leapYearFlag = false;

	return leapYearFlag; 		
}
 
int main(void)
{
 	int totalDays (struct date startDay, struct date endDay);
 	struct date startDay, endDay;
 	
 	printf("Enter start date (dd mm yyyy):");
 	scanf("%i %i %i", &startDay.day, &startDay.month, &startDay.year);
 	
 	printf("Enter end date (dd mm yyyy):");
 	scanf("%i %i %i", &endDay.day, &endDay.month, &endDay.year);
 	
 	printf("Startday is %i/%i/%2i", startDay.day, startDay.month, startDay.year % 100); 	
 	printf("endday is %i/%i/%2i", endDay.day, endDay.month, endDay.year % 100);
 	
  	int total = totalDays(startDay,endDay);
  	
  	printf("Tomorrows's date is %i/%i/%2i", total);
 	
 	return 0; 	
}


