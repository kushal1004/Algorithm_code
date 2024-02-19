#include<stdio.h>
int main()
{
int arr[10],N, X,i;
printf("Enter the no of element in an array : ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
      printf("Enter the %d no. element in an array: ",i);
      scanf("%d",&arr[i]);
    }
    printf("Enter the key value : ");
    scanf("%d",&X);
    for(i=0;i<N;i++)
    {
    	if(arr[i]==X)
    	{
    		printf("Element found in %d position\n",i);
    	}
		else
		{
			printf("Element not found\n");
		}
	}
return 0;
}
