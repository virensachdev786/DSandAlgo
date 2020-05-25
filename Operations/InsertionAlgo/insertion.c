#include<stdio.h>
int main()
{

	//LA --> Linear Array
	//N --> number of elements
	//K --> a positive int (K<=N),position of insertion
	//ITEM --> the number to be inserted
	
	
	int N = 5;
	int K = 2;
	int ITEM = 25;
	int i;
	int LA[5] = {1,2,3,4,5};

	printf("Entered array is:");
	for(i=0;i<5;i++)
        {
                printf(" %d, ",LA[i]);
        }

	printf("\n");


	//1	
	int J = N-1;
	printf("Value of N[%d] given to J is: %d",J,N);
	
	//2
	while(J >= K)
	{
		//3
		LA[J+1] = LA[J];
		
		//4
		J = J -1;
	}
	printf("%d \n ",J);

	//5
	LA[K] = ITEM;
	
	//6
	N = N + 1;

	for(i=0;i<=5;i++)
        {
                printf(" %d, ",LA[i]);
        }

return 0;
}
