#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left,  *right;
};

void createtree(int);
int search(int);

struct node* head = NULL;
struct node* temp = NULL;
struct node* prev = NULL;

int main()
{
	int choice = 0, num, flag = 0, key;

	do
	{
		printf("enter your choice: \n1. insert\n2. search\n3. exit\n");
        printf("Enter choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				printf("enter the element to insert: ");
				scanf("%d", &num);
				createtree(num);
				break;

			case 2:
				printf("enter the node to search:");
				scanf("%d", &key);
				flag = search(key);
				
				if (flag)
				{
					printf("\nnode found in the tree");
				}
				else
				{
					printf("\nnode not found\n");
				}

			case 3:
                head = NULL;
				free(head);
				break;
		}
	} while (choice != 3);
	

	return 0;
}

void createtree(int num)
{
	temp = head;
	prev = head;

	if (head == NULL)
	{
		head = (struct node*)malloc(sizeof(struct node));
		head->data = num;
		head->left = head->right = NULL;
	}
	else
	{
		while(temp != NULL)
		{
			if(num > temp->data)
			{
				prev = temp;
				temp = temp->right;
			}
			else
			{
				prev = temp;
				temp = temp->left;
			}
		}

		temp = (struct node*)malloc(sizeof(struct node));
		temp->data = num;
        temp -> left = NULL;
        temp -> right = NULL;

		if (num >= prev->data)
		{
			prev->right = temp;
		}
		else
		{
			prev->left = temp;
		}
	}
}

int search(int key)
{
    temp = head;
	while (temp != NULL)
	{
		if (key > temp->data)
		{
			temp = temp->right;
		}
		else if (key < temp->data)
		{
			temp = temp->left;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
