#include<stdio.h>
int a[10],i,n,x;
int search(int a[],int n,int x)
{
	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			return (i);
		}
	}
	return -1;
}
int main()
{
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search\n");
	scanf("%d",&x);
	int c=search(a,n,x);
	printf("%d is at index %d",x,c);
	return 0;
}
