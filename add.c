#include <stdio.h>
int add(int,int,int);
int main()
{
    int x,y,z,sum,a[3],i;
    printf("enter x,y,z");
    scanf("%d%d%d",&x,&y,&z);
    sum=x+y+z;
    printf("sum=%d",sum);
    printf("enter the array values");
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    sum=0;
    for(i=0;i<3;i++)
    sum=sum+a[i];
    printf("sum=%d",sum);
    sum=add(x,y,z);
    printf("sum=%d",sum);
    return 0;
}
int add(int x, int y, int z)
{
    int c;
    c=x+y+z;
    return c;
}
