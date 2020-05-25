#include<stdio.h>
void delete1(int arr[],int n,int k)
{
        int j;

        for(j = k; j < n; j++)
        {
                arr[j] = arr[j+1];
        }
	
}

int main()
{
	int i;
	int arr[5] = {1,2,3,4,5};

	printf("Array before deletion: ");
	for(i=0;i<5;i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("\n");
	
	delete1(arr,4,1);

	printf("Array after deletion: ");	
	for(i=0;i<4;i++)
	{
		printf("%d, ", arr[i]);
	}

printf("\n");
return 0;
}
 
