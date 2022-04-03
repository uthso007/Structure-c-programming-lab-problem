#include<stdio.h>
#include<conio.h>
int main()
{
  char num[50]="BIMAN BANGLADESH AIRLINES";
  int j,k,i,r;

  for(j=0;j<24;j++)
   {
     for(k=0;k<24;k++)
      {
	if(num[k]>num[k+1])
	 {
	  r=num[k];
	  num[k]=num[k+1];
          num[k+1]=r;
	 }
	else
          continue;
      }
   }

   for(i=0;i<=24;i++)
       printf("%c",num[i]);
   getch();
   return 0;
}

