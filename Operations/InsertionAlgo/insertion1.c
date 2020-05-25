//INSERT (LA,N,K,ITEM)
//Here LA is linear array with N elements and K is a positive integer 
//such that K<=N and algo inserts ITEM at Kth position.
#include<stdio.h>
int main()
{

	//taking item from user
	int ITEM;
	printf("enter the value for ITEM: ");
	scanf("%d",&ITEM);
	printf("Entered value for item is: %d\n",ITEM);
	
	//Taking array from the users.
	int i;	
	int N;
	printf("Enter the Value for N(number of elements): ");
	scanf("%d",&N);
	printf("Entered value for N is : %d \n",N);
	int LA[N];
	for(i =1;i<=N;i++)
	{
		printf("Enter the %d value for array: ",i);
		scanf("%d",&LA[i]);
		printf("\n");
	}
	printf("Entered Array is: ");
	printf("[");
	for(i=1;i<=N;i++)
	{
		printf("%d,",LA[i]);
	}
	printf("]");
	printf("\n");

	

	//Taking user input from user for position of insertion:K
	int K;
	printf("Enter the position where you want ITEM inserted: ");
	scanf("%d",&K);
	printf("Entered position is: %d\n",K);


	//Setting J to N
	int J = N;
	
	//setting while loop
	while( J >= K )
	{
		
		//setting LA[J+1] = LA[J]
		LA[J+1] = LA[J];

		//setting J = J - 1
		J = J - 1;
	}
	
	//setting LA[K] = ITEM;
	LA[K] = ITEM;

	//Resetting N
	N = N + 1;

	printf("\n");

	//printing arrat
	printf("New array is: ");
	for(i=1;i<=N;i++)
        {
                printf("%d,",LA[i]);
        }
	
	
	return 0;
}
