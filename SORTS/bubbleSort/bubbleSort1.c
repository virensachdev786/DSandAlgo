#include<stdio.h>
int main()
{
	int A[5] = {5,3,4,2,1};
	int N = 5;
	int I = 1;
	int J;
	int temp;

		printf("initial array: ");
		for(int i=0;i<N;i++)
		{
			printf("%d,",A[i]);
		}
		printf("\n");

	while(I<N)
	{
			printf("iteration : ");
			printf("\n");
			for(int i=0;i<N;i++)
                	{
                        	printf("%d,",A[i]);
                	}
                		
		J = 0;
		
		while(J<=N-I)
		{
			if(A[J]>A[J+1])
			{
				temp = A[J];
				A[J] = A[J+1];
				A[J+1] = temp;
			}
		J = J + 1;
		
			printf("Array of inner while: ");
			for(int i=0;i<N;i++)
                        {
                        	printf("%d,",A[i]);
                        }
			printf("\n");

		}
		I = I + 1;
	}
	
	printf("sorted array is: ");
	for(int i=0;i<N;i++)
	{
		printf("%d,",A[i]);
	}

return 0;
}	
