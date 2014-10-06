/* counting words in a piece of text
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

bool alphabetic(const char c){
	if((c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'z')){
		return true;
	}else{
		return false;
	}
}

// function to count the number of  words
int countwords(const char string[])
{
	int i;
	int wordcount = 0;
	bool albhapetic(const char c);
	bool lookingforward = true;
	
	for(i = 0; string[i] != '\0'; i++){
		if( alphabetic(string[i]) ){
			if(lookingforward){
				wordcount++;
				lookingforward = false;
			}
		}else{
			lookingforward = true;
		}
	}
	
	return wordcount;
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

int main(void)
{
	char line[80];
	int i;
	int totalwords = 0;;
	void readLine(char buffer[]);
	int countwords(const char string[]);
	bool endoftext = false;
	
	printf("Type in your text");
	printf("Once you are done press 'RETURN'. \n\n");
	
	while( ! endoftext){
		readLine(line);
		
		if(line[0] == '\0'){
			endoftext = true;
		}else{
			totalwords =+ countwords(line);
		}
	}
	
	printf("There are %i words in the sentences.\n", totalwords);
		
	return 0;
}

