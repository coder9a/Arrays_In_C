#include<stdio.h>
int main()
{
	int i,n, a[n],ele,flag,c=0;
	printf("Enter size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to be searched\n");
	scanf("%d",&ele);
	for(int i=0;i<n;i++)
	{
		if(a[i] == ele)
		{
			flag = 1;
		    break;
		}
		c++;
	}
	if(flag == 1)
	printf("Element found at position %d",c+1);
	else
	printf("Element not found");
}
