#include<stdio.h>
#include<conio.h>

int main()
{
 long int num, conv[50],b,c,i=0;
 printf("Enter a decial number: ");
 scanf("%ld",&num);
 printf("In which base you want to convert? ");
 scanf("%ld",&b);

 while(num!=0)
  {
    conv[i++]=num%b;
    num=num/b;
   }

 printf("\n\nThe Equivalent Converted Number in %ld base is: ",b);
 for(c=i-1;c>=0;c--)
    printf("%ld",conv[c]);

 getch();
 return 0;
}

