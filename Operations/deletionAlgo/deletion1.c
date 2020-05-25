#include<stdio.h>
int main()
{
	int arr[5] = {1,2,3,4,5};
	int ITEM;
	int K = 1;
	ITEM = arr[K];
	int n =5;
	for(int i=K;i<n-1;i++)
	{
		arr[i] = arr[i+1];
	}
	n = n-1;
	
	for(int j=0; j<n; j++)
	{
		printf("%d,",arr[j]);
	}
return 0;
}
