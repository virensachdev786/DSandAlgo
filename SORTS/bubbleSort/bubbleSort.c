#include<stdio.h>
int main()

{
	int A[5] = {5,4,3,2,1};
	int N = 5;

	printf("Hardcoded Array is: ");
	for(int i = 0;i<5; i++)
	{
		printf("%d,",A[i]);
	}
	printf("\n");

	int I = 1;
	while(I<N)
	{
		int J = 0;
			while(J   <= N - 1)
			{
				if(A[J] > A[J+1])
				{
					int temp = A[J];
					A[J] = A[J + 1];
					A[J+1] = temp;
				}
		
				J = J + 1;
			}	
	
	I = I + 1;

	}
	printf("New array is: ");
	for(int i=0; i<5; i++)
	{	
		printf("%d,",A[i]);
	}

	printf("\n");

return 0;
printf("\n");
}

