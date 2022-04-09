#include<stdio.h>
#include<conio.h>
void exchange(float *a, float *b);

int main()
{
 float x,y;
 printf("Enter the vaule of the two number: ");
 scanf("%f %f",&x,&y);
 printf("\n Before exchange x= %f, y=%f", x,y);
 exchange(&x,&y);
 printf("\n\n After exchange  x= %f, y=%f", x,y);
 getch();
 return 0;
}

void exchange(float *a, float *b)
 {
   float t;
   t=*a;
   *a=*b;
   *b=t;
 }

