//     0|0         0|0       0|0
//  data|*link
//  item|NULL



#include<stdio.h>
#include<stdlib.h>

//giving structure to node
struct linkedList
{
	int data;
	struct linkedList *link;
};

struct linkedList *temp, *head = NULL;

//creating node
void createNode(int item)
{
	//allocating membory
	struct linkedList *NEW = (struct linkedList *)malloc(sizeof(struct linkedList));
	
	//putting item in data of node
	NEW -> data = item;
	//putting NULL in link of node
	NEW -> link = NULL;
	
	//only in 1st node 
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

void display()
{
	struct linkedList *current = head;
	if(head == NULL)
	{
		printf("Linked list is empty");
		return;
	}
	
	printf("Nodes are: ");
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
	
	display();
return 0;

