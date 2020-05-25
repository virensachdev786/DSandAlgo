#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct linkedList
{
	int data;
	struct linkedList *link;
};

struct linkedList *LOC, *head, *temp = NULL;

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

bool search(int item)
{
	temp = head;
	if(temp == NULL)
	{
		printf("LL is empty");
	}
	
	while(temp != NULL)
	{
		if(temp -> data == item)
		{
			printf("Element found");
			LOC = temp;
			return 1;
		}
		else
		{
			temp = temp -> link;
		}
	}
	
	printf("Element not found");
	return 0;
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
	createNode(3);
	createNode(4);
	display();
	printf("\n");
	search(3);

	printf("\n");
	return 0;
}
