#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 int b[10]={11,12,13,14,15,16,17,18,19,20};
 int i, c[10];

 printf("\n Table:Adding two numbers:(c=a+b)\n\n");
 printf(" a\t b\t c\n");
 printf(" --------------------\n");
 for(i=0;i<10;i++)
   {
    c[i]=a[i]+b[i];
    printf(" %d\t %d\t %d\n",a[i],b[i],c[i]);
   }
 getch();
 return 0;
}

