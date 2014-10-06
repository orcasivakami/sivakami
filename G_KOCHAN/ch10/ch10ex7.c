/* function to remove a substring
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char source[80];
	char insert[80];
	int s;
	char afterInsert[80];
	void readLine(char buffer[]);
	void insertString(char source[], const char insert[], int start);	
	
	printf("Enter the string:");
	readLine(source);
	
	printf("Enter the string to insert:");
	readLine(insert);
	
	printf("Enter the position to insert:");
	scanf("%i", &s);
		
	printf("\nThe text is '%s' and the inserting word is %s and the place to insert is %i.", source, insert, s);
	insertString(source, insert, s);
	
	printf("\nThe resultant text is: %s ", source);
		
	return 0;
}

// function to inserting the words
void insertString(char source[], const char insert[], int count)
{
	char source1[80];
	int i;
	int j;
	int k = 0;
	char result[50];
	void substring (char source[], int count, char result[]);
	substring (source, count, result);
	for( j = 0; (insert[j] != '\0') ; j++){		
			source[count++] = insert[j];		
	}
	for( j = 0; (result[j] != '\0') ; j++){		
			source[count++] = result[j];		
	}
	source[ count++ ] = '\0';
}

// function to find the substring of the source text
void substring(char source[], int count, char result[])
{
	int i;
	int j;
	printf("\n%s",source);	
	for( i = count, j = 0; (source[i] != '\0') ; i++, j++){
		result[j] = source[i];	
	}
	result[j] = '\0';
 	
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

