#include<stdio.h>
int main()
{
int a[20],n,i,num;
printf("enter the number of elements in the array");
scanf("%d",&n);
printf("enter the elements of the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be searched");
scanf("%d",&num);
int j=(n-1)/2;
if(num==a[j])
{
printf("element is at the index %d",j);
}
else if(num<a[j])
{
for(i=0;i<j;i++)
{
if(num==a[i])
printf("element is at the index %d",i);
}
}
else
{
for(i=(j+1);i<n;i++)
{
if(num==a[i])
printf("element is at the index %d",i);
}
}
return 0;
}
