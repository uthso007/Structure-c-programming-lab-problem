#include<stdio.h>
#include<conio.h>
int gcd(int x, int y);
int lcm(int x, int y);

int main()
{
 int x,y,gc;
 printf("\n Enter two numbers: ");
 scanf("%d %d",&x, &y);
 gcd(x,y);
 lcm(x,y);
 getch();
 return 0;
}

int gcd(int x, int y)
   {
     while(y!=0)
      {
        int gc;
	gc=x%y;
	x=y;
        y=gc;
      }
    printf("\n\n The Greatest Common Divisor is: %d",x);
    return 0;
   }


int lcm(int x, int y)
   {
     int i,l=1,lc;
     for(i=2;i<=x && i<=y; i++)
     while(x%i==0 && y%i==0)
      {
       x=x/i;
       y=y/i;
       l=l*i;
      }
     l=l*x*y;
     printf("\n\n The least common multiple is: %d",l);
     return 0;
   }

