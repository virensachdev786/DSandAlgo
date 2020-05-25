#include<stdio.h>
#include<stdlib.h>

struct linkedList
{
	int data;
	struct linkedList *link;
};

struct linkedList *front, *rear = NULL;

void enqueue(int item)
{
	struct linkedList *NEW = (struct linkedList *)malloc(sizeof(struct linkedList));

	if(NEW == NULL)
	{
		printf("Out of membory");
		return;
	}
	NEW -> data = item;
	NEW -> link = NULL;
	
	if(rear == NULL)
	{
		front = rear = NEW;
	}
	else
	{
		rear -> link = NEW;
		rear = NEW;
	} 
	
	return;
}

void dequeue()
{
    int item;
    struct linkedList *P;
    if(front == NULL)
    {
        printf("Empty queue");
        return;
    }
    P = front;
    item = P -> data;
    front = P -> link;
    
    if(front == NULL)
    {
        rear = NULL;
    }
    P -> link = NULL;
    free(P);
    
    return;
}

void display()
{
	struct linkedList *current = front;
	if(front == NULL)
	{
		printf("Out of membory");
		return;
	}
	printf("queue is: ");
	while(current != NULL)
	{
		printf("%d,",current -> data);
        current = current -> link;
	}
}

int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
    	dequeue();
	display();

    printf("\n");
	return 0;
}
