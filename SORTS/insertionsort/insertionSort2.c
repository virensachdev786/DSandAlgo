#include<stdio.h>
int main()
{
	int arr[5] = {5,4,3,2,1}; //unsoorted array 
	int n = 5; //number of eements
	int i; //element that will be compared
	int key; //temp variable 
	int j; //value which i will be compared with.
	
	printf("array is: ");	
	for(int j=0;j<n;j++)
	{
		printf("%d,",arr[j]);
	}

	//for loop
	for(int i=1;i<n;i++)
	{
		key = arr[i]; //storing values in temp to compared with last one
		j = i - 1;  //storing value before arr[i] in j
		while( j >= 0 && arr[j] > key) //condition checking, where (j > 0) and value of (arr[j]i.e i-1> key)
		{
			arr[j+1] = arr[j]; //extanging value
			j = j - 1; //updating value of j
		}
		arr[j+1] = key; //changing value of key
	}
	
	printf("\n");
	printf("Sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d,",arr[i]);
	}


printf("\n");
return 0;
}   	
