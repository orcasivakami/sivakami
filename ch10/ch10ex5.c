/* function to determine the substring
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char searchstr[80];
	//char text1[80] = "for testing purpose"//
	char text1[80];
	int index;
	void readLine(char buffer[]);
	int findString (char source[], char search[]);
	
	printf("\nEnter the string:");
	readLine(text1);
	
	printf("\nEnter the search string:");
	readLine(searchstr);	
	
	index = findString(text1, searchstr);
	printf("\n%i", index);
		
	return 0;
}

// function to count the number of  words
int findString (char source[], char search[])
{
	int i;
	int j;
	int result = 0;
	printf("\n%s",source);	
	printf("\n%s",search);	
	for( i = 0; (source[i] != '\0') ; i++){
		for( j = i; (search[j] != '\0');  j++){
		if(search[j] == source[i])
			result++;
		}
	}
	return result;
 	
}

void readLine(char buffer[]){
	char c;
	int j=0;
	
	do{
		c = getchar();
		buffer[j] = c;
		j++;
	}while(c != '\n');
	
	buffer[j-1] = '\0';
}

