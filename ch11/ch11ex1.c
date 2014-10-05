/* Program to traverse a linked list
*  by Sivakami, Sep 2014
*/
#include <stdio.h>
int main(void)
{
	struct entry
	{
		int value;
		struct entry *next;
	};
//	void insertEntry(struct newval);
	struct entry newval;
	struct entry n1, n2, n3;
	struct entry *list_pointer = &n1, *list_pointer1;
	n1.value = 100;
	n1.next = &n2;
	n2.value = 200;
	n2.next = &n3;
	n3.value = 300;
	n3.next = (struct entry *) 0; 
	
	printf("Enter the int to be inserted ");
	scanf("%i",&newval.value);
	printf("Enter the ptr next to be inserted ");
	scanf("%i",&newval.next);
	n3.next=&newval;
	newval.next = (struct entry *) 0;
	
	while( list_pointer != (struct entry *) 0 ) {
		printf ("%i\n", list_pointer->value);
		list_pointer = list_pointer->next;
	}
	//insertEntry(newval);
	return 0;
}

/*void insertEntry(struct newval){
	newval.value = value;
	newval.next = next;
	
}*/
