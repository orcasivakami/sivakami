/* to read lines data
* by Sivakami, August 2014
*/

#include <stdio.h>

int main(void)
{
	char line[80];
	int i;
	void readLine(char buffer[]);
	
	printf("Enter the lines:");
	
	for( i = 0; i < 3; i++){
		readLine(line);
		printf("The line is: %s\n\n", line);
	}
		
	return 0;
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

