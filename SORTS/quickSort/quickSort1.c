#include<stdio.h>

int partation(int array[], int F, int L)
{
	int pivot = array[F];
	int i = F;
	int j = L;
	int pos = F;
	
	while(1)
	{
		while(array[pos] <= array[j] && pos != j)
		{
			j = j - 1;
		}
		if(pos == j)
		{
			return pos;
		}
		if(array[pos] > array[j])
		{
			int temp = array[pos];
			array[pos] = array[j];
			array[j] = temp;
			
			pos = j;
		}
		while(array[pos] >= array[i] && pos != i)
		{
			i = i + 1;
		}
		if(pos == i)
		{
			return pos;
		}
	        if(array[pos] >= array[i] && pos != i)
        	{
            		int temp = array[pos];
            		array[pos] = array[i];
            		array[i] = temp;
            
            		pos = i;
        	}
	}
}



void quickSort(int array[], int F, int L)
{
	if(F <= L)
	{
		int pi = partation(array, F, L);
		quickSort(array, F, pi-1);
		quickSort(array, pi+1, L);
	}
}


int main()
{
	int array[25] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
	
	int F = 0; //first position
	int L = 19; //Last position
	int i; //for loops
	
	//unsorted array
	printf("unsorted array is: ");
	for(i=0;i<20;i++)
	{
		printf("%d,"array[i]);
	}
	printf("\n")

	//calling quickSort function
	quickSort(array, F, L);

	//sorted array
	printf("Sorted array is: ");
	for(i=0;i<20;i++)
        {
                printf("%d,"array[i]);
        }
	printf("\n"); 
return 0;
}
