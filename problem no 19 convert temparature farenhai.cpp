#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 float c,f;
 printf("Enter a celcious temperature:\n");
 scanf("%f",&c);
 f=((9*c)/5)+32;
 printf("\n\nThe equivalent farenheight temperature is: %.2f",f);

 getch();
 return 0;
}

//c/5= (F-32)/9 = (K-273)/5 = (R-492)/9

