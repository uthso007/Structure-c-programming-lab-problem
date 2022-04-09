#include<stdio.h>
int main(){
  int i,j,k,l,n;
  int num=1;
printf("enter the number of row= ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%3d",num);
num++;
}
printf("\n");
}
return 0;
}
