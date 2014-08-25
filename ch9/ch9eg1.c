/* This program is about strut
 *  by Sivakami, august 2014 */
 
 #include <stdio.h>
 
 int main(void)
 {
 	struct date
	 { 		
 		int day;
 		int month;
 		int year; 		
 	};
 	
 	struct date today;
 	
 	today.day=25;
 	today.month=8;
 	today.year=2014;
 	
 	printf("Today's date is %i/%i/%2i",today.day,today.month,today.year%100);
 	
 	return 0; 	
 }
 
