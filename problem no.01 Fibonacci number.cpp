#include<iostream>
using namespace std;
int main()
{
        int f,n,a=1,b=0,num=1;
    printf("How many fibonacci numbers required:\n\n");
    scanf("%d", &n);
    printf("\nThe first %d fibonacci number is:\n\n",n);
    while(num<=n)
    {
        f=a+b;
        a=b;
        b=f;
        printf("%d\t",f);
        num++;
    }
    return 0;
}

