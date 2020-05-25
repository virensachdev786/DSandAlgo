#include<stdio.h>
#include<stdlib.h>

struct linkedList
{
	int data;
	struct linkedList *link;
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
	temp = NEW;
}

void deleteB(int item)
{
	if(head == NULL)
	{
		printf("LL epty");
	}
	temp = head;
	head = temp -> link;
	item = temp -> data;
	temp -> link = NULL;

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
	createNode(5);
	deleteB(2);
	display();

printf("\n");
return 0;
}
