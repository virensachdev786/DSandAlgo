#include<stdio.h>
void linearSearch(int arr[],int x)
{
        int i;

        for(i=0; i<5; i++)
        {
                if(arr[i] == x)
                {
                        printf("%d is present at location %d",x,i);
                        break;
                }
        }

        if(i == 5)
        {
                printf("%d does not exit",x);
        }

}

int main()
{
	int arr[5] = {1,2,3,4,5};
	
	int x = 4;

	linearSearch(arr,x);

	return 0;
}


