#include<stdio.h>
int main()
{
	int arr[7] = {1,2,3,4,5,6};
	int i;
	int j;//temp variable
	int n = 6;//number of elements
	int k = 2;//position to be inserted
	int Item;

	
		
	printf("The array is: ");	
	for(i=0; i<6; i++)
	{
		printf("%d,",arr[i]);
	}

	//value of j -> 5
	j = n - 1;
	
	//k is 2
	while(j >= k)
	{
		arr[j+1] = arr[j];
		j = j - 1;
	}
	Item = 69;
	arr[k] = Item;
	n = n + 1;

	printf("The new  array is: ");
        for(i=0; i<n; i++)
        {
                printf("%d,",arr[i]);
        }


return 0;
}
		
