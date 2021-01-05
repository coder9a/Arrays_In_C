#include<stdio.h>
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
	printf("Array elements\n");
	for(i=0;i<n;i+=2)
	{
		printf("%d ",a[i]);
	}
	
}
