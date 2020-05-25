#include<stdio.h>

//swap function
void swap(int *a, int *b)
{
		int t = *a;
		*a = *b;
		*b = t;
}

int partation(int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // index of smaller element
	
	for(int j = low; j<= high -1; j++)
	{
		//if current eleemnt is smaller than pivot
		if(arr[j] < pivot)
		{
			i++; //incriment index of smaller pivot
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i+1);
}

//fucntions that sorts
void quickSort(int arr[], int low, int high)
{
	if(low < high)
	{
		//pi is partation index , arr[p] is now at right place.
		int pi = partation(arr, low, high);

		//sorting before and after partation;
		quickSort(arr, low, pi-1);
		quickSort(arr, pi+1, high);
	}
}
		

// function to print array
void printArray(int arr[], int size)
{
	int i;
	for(i =0; i < size; i++)
	{
		printf("%d,",arr[i]);
	}
}

// main 
int main()
{
	int n = 5;
    int arr[] = {77,87,66,56,0};
	
	printf("Unsorted array is: ");
	printArray(arr, n);
	quickSort(arr, 0, n-1);
    printf("\n");
	printf("Sorted array is: ");
	printArray(arr, n);
	
	return 0;
}
