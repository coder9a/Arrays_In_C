#include<stdio.h>
int main()
{
	int i,n, a[n],e,pos;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to insert\n");
	scanf("%d",&e);
	printf("Enter position \n");
	scanf("%d",&pos);
	printf("Array before insertion\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	// Shift elements to the next position
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1] = a[i];
	}
	// Add element at new position
	a[pos-1] = e;
	printf("\nArray after insertion\n");
	for(int i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}	
}
