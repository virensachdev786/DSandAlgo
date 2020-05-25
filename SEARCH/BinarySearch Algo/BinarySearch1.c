
        int A[10] = {1,2,3,4,5,6,7,8,9,10};//array
        int n = 10;//number of elements in array
        int x = 3;//value to be searched

        int lowerBound = 1;
        int upperBound = n;
        int midPoint;#include<stdio.h>
int main()
{
	int A[10] = {1,2,3,4,5,6,7,8,9,10};//array
	int n = 10;//number of elements in array
	int x = 3;//value to be searched

	int lowerBound = 1;
	int upperBound = n;
	int midPoint;

	while(1)
	{
		if(upperBound < lowerBound)
		{
			printf("%d does not exist",x);
			break;
		}
		

		midPoint = lowerBound + (upperBound - lowerBound) / 2;
		
		if(A[midPoint] < x)
		{
			lowerBound = midPoint + 1;
		}
		
		if(A[midPoint] > x)
		{
			upperBound = midPoint - 1;
		}

		if(A[midPoint] == x)
		{
			printf("x is found at %d",midPoint);
			break;
		}
	}
			



printf("\n");
return 0;
}
	
	
