#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 int max,i,n,a[20];
 printf("\nHow many integer number do you want to enter? ");
 scanf("%d",&n);
 printf("\nEnter %d integer number:\n",n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 max=a[0];
 for(i=1;i<=n;i++)
   {
     if(a[i]>max)
      max=a[i];
   }
 printf("The largest number is: %d",max);
 getch();
 return 0;
}

