#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int i,j,d,r=20,c=20;
 printf("\n Multiplication Table:\n\n");
 printf("   ");

 for(j=1;j<=c;j++)
    printf("%4d",j);

 printf("\n");
 printf(" ------------------------------------------------------------------------------------\n");

 for(i=1;i<=r;i++)
  {
      printf("%2d|",i);
      for(j=1;j<=c;j++)
          {
             d=i*j;
             printf("%4d",d);
          }
      printf("\n");
   }
 getch();
 return 0;
}



