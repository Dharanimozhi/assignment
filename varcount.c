#include<stdio.h>
int main()
{
	char a[20],b[20];
	int count=0,i=0,j=0,var=0,temp;
	printf("enter the equation");
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='A')&&(a[i]<='Z'))
		{
			b[count]=a[i];
			count++;
		}
	}
	b[count]='\0';
	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(b[i]>b[j])
			{
  			temp=b[i];
  			b[i]=b[j];
  			b[j]=temp;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		if(b[i]==b[i+1])
		{
			continue;
		}
	var++;
	}
	printf("%d\n",var);
	return 0;
}
