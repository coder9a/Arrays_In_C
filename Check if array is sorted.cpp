//Check if array is sorted 
#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int printarray(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int insertionsort(int a[], int n)
{
	int i,j,key,flag=0;
	for(i=0;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
			flag = 1;
			break;
		}
		a[j+1] = key;
	}
	if(flag == 1)
		{
			printf("Array is not sorted");
		}
		else
		{
			printf("Array is sorted");
		}
}
int main()
{
	int n,a[n];
	printf("Enter array size\t");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array before sorting\n");
	printarray(a,n);
	insertionsort(a,n);
	
	return 0;
}
