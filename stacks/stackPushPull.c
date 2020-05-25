#include<stdio.h>
#define MAXSIZE 10

struct stack
{
        int arr[MAXSIZE];
        int top;
};

struct stack s;

int  push();
int  pop();
int  display();

int main()
{
        int choice;
        s.top = -1;

        do
        {
                printf("1. Push\n");
                printf("2. Pop\n");
                printf("3. Display\n");
                printf("4. Exit");

                printf("\n\nEnter your choice:");
                scanf("%d", &choice);

                switch(choice)
                {
                        case 1:
                                push();
                                break;
                        case 2:
                                pop();
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                return 0;
                }
        }while(1);

        return 0;
}

int push()
{
        int num;
        if(s.top == (MAXSIZE - 1))
        {
                printf("\nStack is Full");
                return 0;
        }

        printf("Enter theitem to be pushed: ");
        scanf("%d", &num);

        s.top = s.top + 1;
        s.arr[s.top] = num;

        return 0;
}

int pop()
{

        int num;

        if(s.top == -1)
        {
                printf("stack empty");
                return 0;
        }

        num = s.arr[s.top];
        s.top = s.top - 1;

        printf("item popped: %d", num);
        return 0;
}

int display()
{
        if(s.top == -1)
        {
                printf("empty stack \n");
                return 0;
        }
        printf("The stack is: ");
        for(int i=s.top; i>=0; i--)
        {
                printf("%d ,",s.arr[i]);
        }
        return 0;
}

