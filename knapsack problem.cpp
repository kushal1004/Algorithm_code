#include<stdio.h>
#include<stdlib.h>
int main()
{
	float totalval,capacity,weight[50],profit[50],ratio[50],temp;
	int i,j,n;
	//how many items we want to insert the bag or knapsack
	printf("Enter the value number of item: ");
	scanf("%d",&n);
	// weight and profit of the item from question 
	for(i=0;i<n;i++)
	{
		printf("Enter the weight & profit of the [%d]th item: ",i);
		scanf("%f %f",&weight[i],&profit[i]);
	}
	//knapsack capacity
	printf("Enter the capacity of knapsack: ");
	scanf("%f",&capacity);
	//to calculate the ratio 
	for(i=0;i<n;i++)
		ratio[i]=profit[i]/weight[i];
	//arrenge in decresing order
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(ratio[i]<ratio[j]){
				temp=ratio[j];
				ratio[j]=ratio[i];
				ratio[i]=temp;
				
				temp=weight[j];
				weight[j]=weight[i];
				weight[i]=temp;
				
				temp=profit[j];
				profit[j]=profit[i];
				profit[i]=temp;
			}
	printf("Knapsack problems using Greedy method:- \n");
	for(i=0;i<n;i++){
		if(weight[i]>capacity)
			break;
		else
		{
		totalval=totalval+profit[i];
		capacity=capacity-weight[i];
	  }
}
	if(i<n)
	totalval=totalval+(ratio[i]*capacity);
	printf("answer is : %f",totalval);
	return 0;
	
}
