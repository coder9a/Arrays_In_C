#include<stdio.h>
int rotateonebyone(int *a, int n);
void display(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int rotate(int *a, int n, int r)
{
	int i;
	for(i=0;i<r;i++)
	{
		rotateonebyone(a,n);
	}
}
int rotateonebyone(int *a, int n)
{
	int i,temp = a[0];
	for(i=0;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	a[i] = temp;
}
int main()
{
	int i,n, a[n],r;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter rotation number\n");
	scanf("%d",&r);
	display(a,n);
	rotate(a,n,r);
	display(a,n);
	return 0;
}
