#include<stdio.h>
#include<stdlib.h>

struct linkedList
{
	int data;
	struct  linkedList *link;
};

struct linkedList *temp, *head = NULL;

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

void addNode(int item)
{
	struct linkedList *NEW = (struct linkedList *)malloc(sizeof(struct linkedList));
	NEW -> data = item;
	NEW -> link = head;

	head = NEW;
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
	
	createNode(2);
	createNode(3);
	createNode(4);
	addNode(8);	

	display();

printf("\n");
return 0;
}
