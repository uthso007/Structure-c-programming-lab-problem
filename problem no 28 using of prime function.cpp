#include<stdio.h>
#include<conio.h>
int prime(int);

int main()
{
 int i,n,y;
 printf("\n Enter a number for testing: ");
 scanf("%d",&n);
 prime(n);
 y=prime(n);
 printf("\n\n Return %d",y);
 getch();
 return 0;
}

int prime(int n)
 {
   int i;
   for(i=2;i<=n;i++)
   if((n%i)==0)
     break;

 if(i==n)
   return 1;
 else
   return 0;
 }

