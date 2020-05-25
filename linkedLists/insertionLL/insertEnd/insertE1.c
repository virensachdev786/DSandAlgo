#include<stdio.h>
#include<stdlib.h>

struct linkedList
{
	int data;
	struct linkedList *link;
};

struct linkedList *head, *temp = NULL;

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
	temp = NEW;
}

void addNode(int item)
{
	struct linkedList *NEW = (struct linkedList *)malloc(sizeof(struct linkedList));
	NEW -> data = item;
	NEW -> link = NULL;
	temp -> link = NEW;
}

void display()
{
	struct linkedList *current = head;
	
	printf("nodes are: ");
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
	createNode(4);
	createNode(2);
	addNode(13);
	display();

return 0;
}

	

