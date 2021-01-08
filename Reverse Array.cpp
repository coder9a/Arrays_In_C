#include<stdio.h>
int main()
{
	int i,n, a[n],sum=0;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nReverse array\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
}
