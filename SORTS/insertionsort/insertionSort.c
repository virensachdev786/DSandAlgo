#include<stdio.h>
int main()
{
	int A[5] = {2,3,4,5,1};
	int i;
	int j;
	int key;
	for(i = 1;i < 5;i++)
	{
		key = A[i]; 
		j = i - 1;
		while(j >= 0 && A[j] > key)
		{
			A[j+1] = A[j];
			j = j - 1;
		}
		A[j + 1] = key;
	}

	printf("New array is: ");
	for(i=0;i<5;i++)
	{
		printf("%d ,",A[i]);
	}

return 0;
}
