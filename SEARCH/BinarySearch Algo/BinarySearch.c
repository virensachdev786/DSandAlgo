#include<stdio.h>
int main()
{
	int N = 5;
	int A[5] = {1,2,3,4,5};
	int X = 100;
	
	int lowerBound = 1;
	int upperBound = N;

	while(1)
	{
		if(upperBound < lowerBound)
		{
			printf("Element X is not found in array");
			break;
		}
		
		int midPoint;
		midPoint = lowerBound + (upperBound - lowerBound) / 2;

		if(A[midPoint] < X)
		{
			lowerBound = midPoint + 1;
		}
		if(A[midPoint] > X)
		{
			upperBound = midPoint - 1;
		}
		if(A[midPoint] == X)
		{	
			printf("Position of X is %d",A[midPoint]);
			break;
		}
		
	}

return 0;

}
