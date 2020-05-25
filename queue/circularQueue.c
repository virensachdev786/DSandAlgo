#include<stdio.h>
#define MAX 10

int REAR = -1;
int FRONT = -1;
int count = 0;

void enqueue(int Q[], int item)
{
	if(count == MAX)
	{
		printf("Q is full");
	}
	REAR = (REAR + 1) % MAX;
	Q[REAR] = item;
	count = count + 1;

	return;
}

void dequeue(int Q[])
{
	int item;
	if(count == 0)
	{
		printf("Queue is empty");
		return;
	}
	FRONT = (FRONT + 1) % MAX;
	item = Q[FRONT];
	printf("%d has been dequeued",item);
	count = count - 1;
	return;
}

void display(int Q[])
{
	int i;
	for(i=FRONT+1;i<=REAR;i++)
	{
		printf("%d,",Q[i]);
	}
}

int main()
{	
	int Q[MAX];
	enqueue(Q, 1);
	enqueue(Q, 2);
	enqueue(Q, 3);
	dequeue(Q);	
	printf("\n");
	display(Q);
	return 0;
}
