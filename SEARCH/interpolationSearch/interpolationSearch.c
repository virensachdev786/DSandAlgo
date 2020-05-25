#include<stdio.h>
int main()
{

	int N = 5; // number of elements
	int A[5] = {1,2,3,4,5}; //array
	int KEY = 4; //element to be searched
	int LOC; //Location of K
	

	int I;
	I = 0;
	int J;
	J = N - 1;
	int POS; 

	while(I <= J)
	{
		
		POS = I + ((KEY - A[I]) * (J-I) / (A[J] - A[I]));
		printf("POS calculated as %d\n",POS);
		if(KEY == A[POS])
		{
			printf("Element is found at %d",POS);
			break; 
		}
		else if(KEY < A[POS])
		{
			J = POS - 1;
		}
		else
		{
			I = POS + 1;
		}

	}

	if(J < I)
	{
		printf("element not found in the array");
	}

return 0;
printf("\n");
}

