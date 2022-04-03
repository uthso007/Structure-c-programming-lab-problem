#include<stdio.h>
#include<conio.h>

int main()
{
 long int num, conv[50],c,i=0;
 printf("Enter a decial number: ");
 scanf("%ld",&num);
 while(num!=0)
  {
    conv[i++]=num%8;
    num=num/8;
  }

 printf("\n\nThe Equivalent octal Number is: ");
 for(c=i-1;c>=0;c--)
    printf("%ld",conv[c]);

 getch();
 return 0;
}


