#include<stdio.h>
#include<climits>
int DAC_maxmin(int a[],int i,int j,int min,int max);
int main()
{
	int i,n,a[n],max,min;
	printf("Enter array size\n");
	scanf("\n%d",&n);
	printf("Enter Array Elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	min = INT_MAX;
	max = INT_MIN;
	max,min=DAC_maxmin(a,0,n-1,min,max);
	printf("Maximum element is %d\n",max);
	printf("Minimum element is %d",min);
	return 0;
}
int DAC_maxmin(int a[],int i,int j,int min,int max)
{
	if(i==j)
	{
		max = min = a[i];
		return min,max;
	}
	else if(i == j-1)
	{
		if(a[i]>a[j])
		{
			max = a[i];
			min = a[j];
		}
		else
		{
			max = a[j];
			min = a[i];
		}
	return min,max;
	}
	else
	{
		int max1,max2,min1,min2;
		int mid = (i+j)/2;
	    DAC_maxmin(a,i,mid,min,max);
		DAC_maxmin(a,mid+1,j,min,max);
	/*	if(max1>max2)
		{
			max = max1;
		}
		else
		{
			max = max2;
		}
		if(min1<min2)
		{
			min = min1;
		}
		else
		{
			min = min2;
		}
	return min,max;*/
	}
}
