
// PROGRAM FOR AP prblm no 3

#include<stdio.h>

#include<math.h>

int main()

{

    int s,d,n,i;
 
   int sum=0;
 
   printf("Enter the first number of the A.P. series:\n ");

    scanf("%d",&s);

    printf("Enter the total numbers in the A.P. series:\n ");

    scanf("%d",&n);

    printf("Enter the common difference of A.P. series:\n ");

    scanf("%d",&d);

    for(i=0;i<n;i++)

    {

        printf("%d\t",s);

        s=s+d;

    }

    return 0;

}
