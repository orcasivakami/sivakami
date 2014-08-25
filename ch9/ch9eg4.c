/* This program is to find out the tomorrows date along with checking leapyear, 
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
struct date update (struct date today)
{
	struct date tomorrow;
 	int numberOfDays(struct date d);
 	
 	if(today.day != numberOfDays(today))
 	{
 		tomorrow.day=today.day+1;	
 		tomorrow.month=today.month;
 		tomorrow.year=today.year;
 	}
 	else if(today.month==12){
 		tomorrow.day=1;	
 		tomorrow.month=1;
 		tomorrow.year=today.year+1;
 	}else{
 		tomorrow.day=1;	
 		tomorrow.month=today.month+1;
 		tomorrow.year=today.year;
 	}
 	
 	return tomorrow;	
};

//function to find the number of days
int numberOfDays(struct date d)
{
 	int days;
 	bool isLeapYear(struct date d);
 	const int dayspermonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 	
 	if(isLeapYear(d)==true && d.month==2)
 		days=29;
 	else
 		days=dayspermonth[d.month-1];
 		
 		
 	return days;
}

//function to find the leap year 
bool isLeapYear(struct date d)
{
 	_Bool leapYearFlag;
 	
 	if( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
 		leapYearFlag="true";
 	else
 		leapYearFlag="false";

	return leapYearFlag; 		
}
 
int main(void)
{
 	struct date update(struct date today);
 	struct date today, nextday;
 	
 	printf("Enter today's date (dd mm yyyy):");
 	scanf("%i %i %i",&today.day,&today.month,&today.year);
 	
  	nextday=update(today);
  	
  	printf("Tomorrows's date is %i/%i/%2i",nextday.day,nextday.month,nextday.year%100);
 	
 	return 0; 	
}
 
