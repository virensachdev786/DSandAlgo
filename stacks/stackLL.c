#include<stdio.h>
#include<stdlib.h>

struct stackLinkedList
{
	int data;
	struct stackLinkedList *link;

};

struct stackLinkedList *temp, *head = NULL;

void push(int item)
	{
		struct stackLinkedList *NEW = (struct stackLinkedList *)malloc(sizeof(struct stackLinkedList));
		if(NEW == NULL)
		{
			printf("out of membory");
			return;
		}
		NEW -> data = item;
		NEW -> link = head;
		head = NEW;

		return;
	}

void display()
{
    struct stackLinkedList* current;
    current = head;
    while(current != NULL)
    {
        printf("%d,",current -> data);
        current = current -> link;
    }
}

int main()
{
	push(7);
	push(2);
	push(4);
    display();

	return 0;
}
