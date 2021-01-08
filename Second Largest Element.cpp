#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[],int low, int high)
{
	int pivot, i, j;
	pivot = a[low];
	i = low;
	for(j=low+1;j<=high;j++)
	{
		if(a[j]<=pivot)
		{
			i=i+1;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[low],&a[i]);
	return i;
}
int Quicksort(int a[],int i, int j)
{
	int m;
	if(i<j)
	{
		m = partition(a,i,j);		
		Quicksort(a,i,m-1);
		Quicksort(a,m+1,j);
	}
}
int main()
{
	int i,n, a[n];
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Given array is\n");
	for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
	Quicksort(a,0,n-1);
	printf("\nSorted array\n");
	for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\nSecond largest element in array is %d\t",a[n-2]);
	return 0;
}
