#include<stdio.h>
#include<stdlib.h>

struct linkedList
{
	int data;
	struct linkedList *link;
};

struct linkedList *POST, *PRE, *CUR,  *head, *temp = NULL;

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

void reverse()
{
	PRE = NULL;
	CUR = head;
	while(CUR != NULL)
	{
		POST = CUR -> link;
		CUR -> link = PRE;
		PRE = CUR;
		CUR = POST;
	}
	head = PRE;
}

void display()
{
	struct linkedList *current = head;
	printf("Nodes are: ");
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
	reverse();
	display();
	
	printf("\n");
	return 0;
}
		
