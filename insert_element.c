#include<stdio.h>
int main()
{
	int a[20],n,i,num,j;
	printf("enter the number of elements in the array");
	scanf("%d",&n);
	printf("enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be added");
	scanf("%d",&num);
	printf("enter the index");
	scanf("%d",&j);
	for(i=n+1;i>=j;i--)
	{
		a[i+1]=a[i];
	}
	a[j]=num;
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
