/* function to replace a string
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char source[80];
	char change[80];
	char replace[80];
	int s;
	char afterInsert[80];
	void readLine(char buffer[]);
	void replaceString(char source[], char change[], char replace[]);

	printf("Enter the string:");
	readLine(source);
	
	printf("Enter the string to change:");
	readLine(change);
	
	printf("Enter the string to replace:");
	readLine(replace);
		
	printf("\nThe text is '%s' and the text to be changed is '%s' and the replacable text is '%s'.", source, change, replace);
	replaceString(source, change, replace);
	//insertString(source, insert, s);
	
	//printf("\nThe resultant text is: %s ", source);
		
	return 0;
}
// function to replace the words
void replaceString(char source[], char change[], char replace[])
{
	printf("\n in replace string");
	int index;
	int j = 0, len = 0;
	char result[81];
	void insertString(char source[], char insert[], int start);	
	void removeString(char source[], int start, int count, char result[]);	
	
	index = findString(source, change);
	printf("\n%i", index);
	for(j = 0; change[j] != '\0' ; j++){
		len++;		
	}
	if(index != -1){
		removeString(source, index, len, result);
		printf("\n%s", result);
		insertString(result, replace, index);
	}else{
		printf("The text is not found in the string");	
	}
}


// function to find the substring of the source text
void substring(const char source[], int count, char result[])
{
	int i;
	int j;
	printf("\n%s",source);	
	for( i = count, j = 0; (source[i] != '\0') ; i++, j++){
		result[j] = source[i];	
	}
	result[j] = '\0';
 	
}


// function to check the word
int findString (char source[], char search[])
{
	int i = 0;
	int j;
	int result = 0;	
	bool firsttime = false;
	int val;
	for( j = 0; search[j] != '\0' ;  j++ ){			
		for(i = 0; source[i] != '\0'; i++ ){
			if(search[j] == source[i]){
				val = i;				
				result++;
				break;
			}			
		}		
	}
	if(result == j){
		return  (val-result)+1;
	}else{
		return -1;
	}
}

// function to remove the words
void removeString (char source[], int start, int count, char result[])
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
	result = source1;
	printf("\nThe resultant text is:::::: %s ", result);
}


// function to inserting the words
void insertString(char source[], char insert[], int count)
{
	char source1[80];
	int i;
	int j;
	int k = 0;
	char result[50];
	void substring (const char source[], int count, char result[]);
	substring (source, count, result);
	for( j = 0; (insert[j] != '\0') ; j++){		
			source[count++] = insert[j];		
	}
	for( j = 0; (result[j] != '\0') ; j++){		
			source[count++] = result[j];		
	}
	source[ count++ ] = '\0';
	printf("\n>>>>>> %s ", source);
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

