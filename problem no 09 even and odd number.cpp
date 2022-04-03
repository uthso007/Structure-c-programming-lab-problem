#include<stdio.h>
#include<conio.h>
int main()
{
  int v, num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  v=num%2==0 ? 0:1;
  switch(v)
    {
       case 0:
         printf("\nThe number is Even");
         break;
       default:
         printf("\nThe number is Odd");
         break;
  }

  getch();
  return 0;
}


