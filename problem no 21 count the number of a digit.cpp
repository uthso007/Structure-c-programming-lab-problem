#include<stdio.h>
#include<conio.h>

int main()
{
 int count=0, c,i=0;
 long int a, num[30];
 printf("Enter an integer number: ");
 scanf("%ld",&a);
 while(a!=0)
  {
    num[i]=a%10;
    a=a/10;
    count++;
    i++;
  }

 printf("\n\nThe number of digits is: ");
    printf("%d",count);

 getch();
 return 0;
}
