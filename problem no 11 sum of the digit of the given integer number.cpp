#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
   long int a, num,sum=0;
   printf("Enter a positive integer number:\n\n");
   scanf("%ld",&num);
   while(num!=0)
    {
     a=num%10;
     num=num/10;
     sum=sum+a;
    }
   printf("\n\nThe sum of the digits is: %ld",sum);
   getch();
   return 0;
}

