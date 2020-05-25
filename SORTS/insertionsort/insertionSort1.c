#include<stdio.h>
int main()
{
	int arr[5] = {2,5,4,3,1};
	int n = 5;
	int i;
	int j;
	int key;


	for(i=1;i<=n;i++)
	{
		key = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}

	printf("sorted array: ");
	for(i=0;i<n;i++)
	{
		printf("%d,",arr[i]);
	}
printf("\n");
return 0;
}
		
