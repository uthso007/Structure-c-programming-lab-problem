#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
   char a[50];
   printf("Enter a line of text:\n");
   gets(a);
   strupr(a);
   printf("\nThe line of text in uppercase letter is:\n %s",a);
   getch();
   return 0;
}

