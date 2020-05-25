#include<stdio.h>
void linearSearch(int arr[], int x)
{
	int i;
	for(i=0; i<5; i++)
	{
		if(arr[i] == x)
		{
			printf("%d is located at location[%d]",x,i);
			break;
		}
	}

	if(x == 5)
	{
		printf("%d does not exist",x);
	}
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	int x = 3;

	printf("The array is: ");
	for(int i=0;i<5;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n");
	linearSearch(arr,x);
	printf("\n");
return 0;
}
