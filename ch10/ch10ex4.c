/* function to determine the substring
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char substr1[80];
	//char text1[80] = "for testing purpose"//
	char text1[80];
	int s, l;
	void readLine(char buffer[]);
	void substring (char source[], int start, int count,char result[]);	
	
	printf("\nEnter the string:");
	readLine(text1);
	
	printf("Enter the substring starting position and length:");
	scanf("%i", &s);
	scanf("%i", &l);
	
	printf("\nThe test and length %s %i %i", text1, s, l);
	
	substring(text1, s, l, substr1);
	printf("\n%s", substr1);
		
	return 0;
}

// function to find the substring of the source text
void substring (char source[], int start, int count,char result[])
{
	int i;
	int j;
	printf("\n%s",source);	
	for( i = start, j = 0; (source[i] != '\0') && (i <= (count+start)); i++, j++){
		result[j] = source[i];	
	}
	result[j] = '\0';
 	
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

