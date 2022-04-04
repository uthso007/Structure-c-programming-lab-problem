#include<stdio.h>
#include<conio.h>

int main()
{
 int c,i=0;
 long int a, num[30];
 printf("Enter an integer number: ");
 scanf("%ld",&a);
 while(a!=0)
  {
    num[i]=a%10;
    a=a/10;
    i++;
  }

 printf("\n\nThe integer number in reverse order digits is: ");
 for(c=0;c<i;c++)
    printf("%ld",num[c]);

 getch();
 return 0;
}


