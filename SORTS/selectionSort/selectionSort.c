#include<stdio.h>
int main()
{
	int arr[5] = {5,4,3,2,1};
	int i , j, temp;

	for(i=0;i>5;i++)
	{
		for(j=0;j<i;i++)
		{
			temp = i;
			i = j;
			j = temp;
		}
	}

	printf("Selection sort: ");
	for(int v=0;v<n;v++)
	{
		printf("%d,",arr[v]);
	}

	return 0;
}




// #include<stdio.h>
// int main()
// {
// 	int n = 5;
// 	int list[5] = {5,4,3,2,1};
// 	int min;
// 	int i;
// 	int j;
// 	int temp;

// 	for(i=0; i<n-1; i++)
// 	{
// 		min = i;
// 		for(j=i+1; j<n; j++)
// 		{
// 			if(list[j] < list[min])
// 			{
// 				min = j;
// 			}
// 		}
// 		if(min != i)
// 		{
// 			temp = list[min];
// 			list[min] = list[i];
// 			list[i] = temp;
// 		}
// 	}
	
// 	int k;
// 	for(k=0; k<5; k++)
// 	{
// 		printf("%d,",list[k]);
// 	}

// return 0;
// }	
