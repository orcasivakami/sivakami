/* function to remove a substring
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char resulttext[80];
	char text1[80];
	int s, l;
	void readLine(char buffer[]);
	void removeString(const char source[], int start, int count);	
	
	printf("Enter the string:");
	readLine(text1);
	
	printf("Enter the removing val starting position and length:");
	scanf("%i", &s);
	scanf("%i", &l);
	
	printf("\nThe text is %s and the removing word starts from %i and the length is %i.", text1, s, l);
	removeString(text1, s, l);
		
	return 0;
}

// function to remove the words
void removeString (const char source[], int start, int count)
{
	char source1[80];
	int i = start ;
	int j;
	int k = 0;
	for( j = 0; (source[j] != '\0') ; j++){
		if (i != j){
			source1[k++] = source[j];
		} else{
			if (i < count+start){
				i++;
			} else{
				source1[k++] = source[j];	
			}
		}
	}
	source1[ k++ ] = '\0';
	source = source1;
	printf("\nThe resultant text is: %s ", source);
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

