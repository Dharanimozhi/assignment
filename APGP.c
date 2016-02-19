
#include<stdio.h>

#include<math.h>

int main()

{

    int s,d,n,m,i;
 
   int sum=0;
 
   printf("Enter the first number of the A.P. series: \n");

    scanf("%d",&s);
    
    m=s;

    printf("Enter the total numbers in the A.P. series: \n");

    scanf("%d",&n);

    printf("Enter the common difference of A.P. series:\n ");

    scanf("%d",&d);

    printf("output for AP\n");
    for(i=0;i<n;i++)

    {

        printf("%d\t",s);

        s=s+d;

    }
    printf("\noutput for GP\n");
    for(i=0;i<n;i++)

    {

        printf("%d\t",m);

        m=m*d;

    }
   

    return 0;

}
