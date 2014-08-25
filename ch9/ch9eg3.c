/* This program is to find out the tomorrows date along with checking leapyear
 *  by Sivakami, august 2014 */
 
#include <stdio.h>
#include <stdbool.h>
 
struct date
{ 		
	int day;
	int month;
	int year; 		
};
 	
int main(void)
{
 	struct date today,tomorrow;
 	int numberOfDays(struct date d);
 	
 	printf("Enter today's date (dd mm yyyy):");
 	scanf("%i %i %i",&today.day,&today.month,&today.year);
 	
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
 	
  	printf("Tomorrows's date is %i/%i/%2i",tomorrow.day,tomorrow.month,tomorrow.year%100);
 	
 	return 0; 	
}
 
//to find if the month is feb and add one day along with it
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

//to find the year a leap year 
bool isLeapYear(struct date d)
{
 	bool leapYearFlag;
 	
 	if( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
 		leapYearFlag="true";
 	else
 		leapYearFlag="false";

	return leapYearFlag; 		
}

