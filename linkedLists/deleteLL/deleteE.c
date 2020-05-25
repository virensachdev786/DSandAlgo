#include<stdio.h>
#include<stdlib.h>

struct linkedList
{
	int data;
	struct linkedList *link;
};

struct linkedList *head, *temp, *ptemp = NULL;

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

void deleteE(int item)
{
	temp = head;
	while(temp -> link != NULL)
	{
		ptemp = temp;
		temp = temp -> link;
	}
	item = temp -> data;
	ptemp -> link = NULL;
}

void display()
{
	struct linkedList *current = head;
	if(head == NULL)
	{
		printf("linkedList is empty");
	}
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
	deleteE(3);
	display();

printf("\n");
return 0;
}








