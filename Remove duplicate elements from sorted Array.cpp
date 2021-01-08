#include<stdio.h>
int display(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
int duplicate(int *a, int n)
{
	int temp[n];
	int i=0,j=0;
	if(n==0 || n==1)
	{
		return n;
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i] != a[i+1])
		{
			temp[j] = a[i];
			j++;
		}
		temp[j] = a[n-1];
	}
	for(i=0;i<n;i++)
	{
		a[i] = temp[i];
	}
	return j;
}
int main()
{
	int i,n;
	int a[] = {10,20,30,30,40,40,50,50,60,60,70,80,90};
	n = sizeof(a)/sizeof(a[0]);
	display(a,n);
	int x = duplicate(a,n);
	display(a,x);
	return 0;
}
