/* function to convert lower case string to uppercase
* by Sivakami, September 2014
*/

#include<stdio.h>
#include<stdbool.h>

int main(){
	char s[80];
	void readLine(char buffer[]);
	void lowertoUpper(char s[80]);
	
	printf("Enter the string:");
	readLine(s);
	printf("The string you entered is:");
	lowertoUpper(s);
	
	return 0;
}


void readLine(char buffer[]){
	char c;
	int j = 0;
	
	do {
		c = getchar();
		buffer[j] = c;
		j++;
	} while( c != '\n' );
	
	buffer[j-1] = '\0';
}

void lowertoUpper(char source[80]){
	int i = 0;
	for(i = 0; source[i] != '\0'; i++){
		if(source[i] >= 'a' && source[i] <= 'z')
		{
				printf("%c", source[i]-32);	
		}else{
			printf("%c", source[i]);	
		}
	}
	
	
}

