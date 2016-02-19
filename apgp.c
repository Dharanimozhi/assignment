
#include<stdio.h>

#include<math.h>

int main()

{

    int s,d,n,m,c,i;
 
   int sum=0;
   printf("enter your choice" );
   scanf("%d",&c);
   printf("Enter the first number of the series: \n");

    scanf("%d",&s);
    
    m=s;

    printf("Enter the total numbers in the series: \n");

    scanf("%d",&n);

    printf("Enter the common difference of series:\n ");

    scanf("%d",&d);
    switch(c)
    {
	  case 1:   printf("output for AP\n");
		    for(i=0;i<n;i++)

		    {

			printf("%d\t",s);

			s=s+d;

		    }
		    break;

	  case 2:    printf("\noutput for GP\n");
		    for(i=0;i<n;i++)

		    {

			printf("%d\t",m);

			m=m*d;

		    }
		    break;

   }
    return 0;
}
