#include<stdio.h>
int main()
{
	int n = 5;
	int list[5] = {5,4,3,2,1};
	int min;
	int i;
	int j;
	int temp;

	for(i=0; i<n-1; i++)
	{
		min = i;
		for(j=i+1; j<n; j++)
		{
			if(list[j] < list[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			temp = list[min];
			list[min] = list[i];
			list[i] = temp;
		}
	}
	
	int k;
	for(k=0; k<5; k++)
	{
		printf("%d,",list[k]);
	}

return 0;
}	
