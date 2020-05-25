#include<stdio.h>
#include<stdlib.h>

struct linkedList
{
	int data;
	struct linkedList *link;
};

struct linkedList *head,*temp = NULL;

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

void traverse()
{
	struct linkedList *current=head;
	if(head == NULL)
	{
		printf("linkedList is empty");
		return;
	}
	printf("Nodes are:  ");
	while(current != NULL)
	{
		printf("%d,",current -> data);
		current = current -> link;
	}
}

int main()
{
	createNode(2);
	createNode(3);
	createNode(4);
	

	traverse();
return 0;
}
