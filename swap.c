  #include<stdio.h>
  int main()
  {
  	int a[10],b[10],n,i=0,j=0;	
  	printf("enter the number of elements in the array\n");
  	scanf("%d",&n);
  	printf("enter the array\n");
  	for(i=0;i<n;i++)
  	{
  		scanf("%d",&a[i]);
  	}
  	if(n%2==0)
  	{
  		for(j=0,i=n/2;j<n/2,i<n;j++,i++)
  		{
  			b[j]=a[i];
  		}
  		for(j=n/2,i=0;j<n,i<n/2;j++,i++)
  		{
  			b[j]=a[i];
  		}
  	}
  	else
  	{
  		for(j=0,i=(n/2)+1;j<n/2,i<n;j++,i++)
  		{
  			b[j]=a[i];
  		}
  		for(j=(n/2)+1,i=0;j<n,i<n/2;j++,i++)
  		{
  			b[j]=a[i];
  		}
  		b[n/2]=a[n/2];
  	}
  	printf("swapped number\n");
  	for(i=0;i<n;i++)
  	{
  		printf("%d\n",b[i]);
  	}
  	return 0;
  }
