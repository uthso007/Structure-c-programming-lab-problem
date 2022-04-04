 #include<stdio.h>
#include<conio.h>

int main()
{
   int i,j,t,a[10]={7,2,4,8,0,1,9,6,3,5};
   for(i=0;i<=9;i++)
    {
       for(j=0;j<=9;j++)
         {
             if(a[j]>a[j+1])
               {
	     t=a[j];
	     a[j]=a[j+1];
	     a[j+1]=t;
               }
            else
                continue;
         }
     }
 for(i=0;i<=9;i++)
 printf("%d",a[i]);
 getch();
 return 0;
}

