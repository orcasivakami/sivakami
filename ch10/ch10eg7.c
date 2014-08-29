/* function to determine if a character is a alphabetic 
* by Sivakami, August 2014
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	const char text1[] = "to find the text";
	const char text2[] = "The alphabetic function is straightforward enough it simply tests the value of the character passed to it to determine if it is either a lowercase or uppercase letter.";
	int countwords(const char string[]);

	printf("%s words in this line %i\n", text1, countwords(text1));
	printf("%s words in this line %i", text2, countwords(text2));
		
	return 0;
}

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

