#include<stdio.h>
int a[20],n,i,x,j,k,l;
int check(int a[],int n, int x)
{
     for(i=0;i<n;i++)
	{
		if((x<a[i])&&(a[i]!=a[i+1]))
		{
			j=i;
			break;
			//return j;
		}
	}
	 if(a[j]==a[j+1])
		{
			for(k=j;((k<=n-1)&&a[k]==a[k+1]);k++)
			{
				j=k+1;
			}
			
		}
		else if(x==a[n-1])
		{
		return -1;
		}
		return j;
}
int main()
{
	printf("enter the no of elements in array\n");
	scanf("%d",&n);
	printf("enter the array values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter x value\n");
	scanf("%d",&x);
	int res=check(a,n,x);
	printf("%d\n",res);
	
}
