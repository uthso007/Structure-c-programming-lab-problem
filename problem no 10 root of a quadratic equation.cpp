#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
   float a,b,c,p,q,k;
   printf("Enter the value of a, b, and c:\n");
   scanf(" %f %f %f",&a,&b,&c);
   k=b*b-4*a*c;
   if(k<0)
     {
       k=4*a*c-b*b;
       p=b/(2*a);
       q=sqrt(k)/(2*a);
       printf("The roots are imaginary.\n");
       printf("Root 1= -%.1f+%.1fi and\n Root 2=-%.1f-%.1fi",p,q,p,q);
     }

   else
    {
     p=(-b+sqrt(k))/(2*a);
     q=(-b-sqrt(k))/(2*a);
     printf("The roots are real.\n\n");
     printf("Root 1=%.2f and\n Root 2=%.2f",p,q);
     }

getch();
return 0;
}

