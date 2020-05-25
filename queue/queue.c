#include<stdio.h>
#define MAX 10


int REAR = -1;
int FRONT = -1;

void enqueue(int Q[], int item)
{
	if(REAR == MAX - 1)
	{
		printf("queue is full\n");
		return;
	}
	REAR = REAR + 1;
	Q[REAR] = item;

	return;
}

void dequeue(int Q[])
{
	int item;
	if(REAR == FRONT)
	{
		printf("Queue is empty");
		return;
	}
	
	FRONT = FRONT + 1;
	item = Q[FRONT];
	printf("%d is dequed",item);
	printf("\n");	
	if(REAR == FRONT)
	{
		REAR = -1;
		FRONT = -1;
		return;
	}
}

void display(int Q[])
{
	int i;
	if(REAR == FRONT)
	{
		printf("Que is empty");
		return;
	}
	for(i=FRONT+1;i<=REAR; i++)
	{
		printf("%d,",Q[i]);
	}
}
	


int main()
{
	int Q[MAX];
	
	enqueue(Q, 1);
        enqueue(Q, 2);
	enqueue(Q, 5);
	enqueue(Q, 6);
	display(Q);
	printf("\n");
	dequeue(Q);
	dequeue(Q);		

	display(Q);
	return 0;
}
