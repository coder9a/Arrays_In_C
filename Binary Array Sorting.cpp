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
int binarysort(int *a, int n)
{
	int i, j = -1;
	for(i=0;i<n;i++)
	{
		if(a[i] < 1)
		{
			j++;
			swap(&a[i],&a[j]);
		}
	}
}
int main()
{
	int a[] = { 0,1,0,1,0,1,0 };
	int n = sizeof(a)/sizeof(a[0]);
	printf("Array before sorting\n");
	printarray(a,n);
	binarysort(a,n);
	printf("Array after sorting\n");
	printarray(a,n);
	return 0;
}
