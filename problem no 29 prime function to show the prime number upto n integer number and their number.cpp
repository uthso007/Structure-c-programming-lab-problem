#include<stdio.h>
#include<conio.h>
int prime(int);

int main()
{
 int i,n;
 printf("\n Enter upper integer number for prime testing: ");
 scanf("%d",&n);
 prime(n);

 getch();
 return 0;
}

int prime(int n)
 {
   int i,a=2,count=0;
   printf("\n The prime numbers upto %d are:\n\n",n);

   while(a<=n)
    {
      for(i=2;i<=a;i++)
       if((a%i)==0)
         break;

      if(i==a)
       {
	printf("%4d",a);
	count++;
       }
      a++;
     }
   printf("\n\n The number of prime number upto %d is %d",n,count);
   return 0;
 }

