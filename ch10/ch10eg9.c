/* Function to use the dictionary lookups
*  by Sivakami, Aug 2014
*/

#include <stdio.h>
#include <stdbool.h>

struct entry{
	char words[15];
	char definition[50];
};

bool equalstrings(const char s1[], const char s2[])
{
	int i=0;
	bool areEqual;
	
	while( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
		++i;
	}
	
	if( s1[i]== '\0' && s2[i]== '\0' ){
		areEqual = true;
	}else{
		areEqual = false;
	}
	
	return areEqual;
}

int lookups(const struct entry dictionary[], const char search[], const int entries)
{
	int i;
	bool equalstrings(const char s1[], const char s2[]);
	
	for( i = 0; i < entries; i++){
		if( equalstrings( search, dictionary[i].words) )
		{
			return i;
		}
	}
	
	return -1;
}

int main(void)
{
	const struct entry dictionary[100] = {
	{ "aardvark", "a burrowing African mammal" },
	{ "abyss", "a bottomless pit" },
	{ "acumen", "mentally sharp; keen" },
	{ "addle", "to become confused" },
	{ "aerie", "a high nest" },
	{ "affix", "to append; attach" },
	{ "agar", "a jelly made from seaweed" },
	{ "ahoy", "a nautical call of greeting" },
	{ "aigrette", "an ornamental cluster of feathers" },
	{ "ajar", "partially opened" } };
	
	char word[10];
	int entries = 10;
	int entry;
	int lookups(const struct entry dictionary[], const char search[], const int entries);
	
	printf("Enter the string:");
 	scanf("%s ", word);
 	
 	printf("\nThe string %s", word);
 	entry = lookups( dictionary, word, entries );
 	
 	if( entry != -1 ){
 		printf("The word %s is found in %i", word, entry);
 	}else{
 		printf("Sorry, the word %s is not in the dictionary", word);
 	}
 	
 	return 0;
}

