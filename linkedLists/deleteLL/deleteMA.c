#include<stdio.h>
#include<stdlib.h>

struct linkedList
{
	int data;
	struct linkedList *link;
};

struct linkedList *head, *temp, *p = NULL;

void createNode(int item)
{
	struct linkedList *NEW = (struct linkedList *)malloc(sizeof(struct linkedList));
	NEW -> data = item;
	NEW -> link = NULL;
	if(head == NULL)
	{
		head = NEW;
	}
	else
	{
		temp = head;
		while(temp -> link != NULL)
		{
			temp = temp -> link;
		}
		temp -> link = NEW;
	}
}

void deleteMA(int item)
{
	temp = head;
	while(temp -> data != item)
	{
        p = temp;
		temp = temp -> link;
	}
	p -> link = temp -> link;
	temp -> link = NULL;
}

void display()
{
	struct linkedList *current = head;
	printf("NODES ARE: ");
	while(current != NULL)
	{
		printf("%d,",current -> data);
		current = current -> link;
	}
}

int main()
{
	createNode(1);
	createNode(2);
	createNode(3);
	createNode(4);
	createNode(5);
	deleteMA(3);
	display();

    printf("\n");
    return 0;
}

	
