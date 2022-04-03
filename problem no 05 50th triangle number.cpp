#include<stdio.h>
#include<conio.h>
#define N 50
int main()
{
   int a, sum=0;
   for(a=1;a<=N;a++)
      sum=sum+a;
   printf("The 50th triangular number is: %d", sum);
   getch();
   return 0;
}

