#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.1416
int main()
  {
      float x,y;
      int i;
      printf("Angle\t\t Value");
      for(i=0;i<=360;i=i+15)
        {
            x=(pi*i)/180;
            y=sin(x);
            printf("\n…....\t\t……..");
            printf("\n%d\t\t%.2f",i,y);
        }
        return 0;
    }


