#include<stdio.h>
#include<conio.h>
int main()
{
   int i, sum=0, count=0;
   for(i=100;i<=200;i++)
    {
       if(i%7==0)
          {
	count=count+1;
	sum=sum+i;
	printf("  %d",i);
          }
     }

    printf("\n\nTotal number is: %d",count);
    printf("\n\nThe summation is: %d",sum);

   getch();
   return 0;
}


