#include<stdio.h>
#include<conio.h>
long double factorial(int n);
int main()
{
     int n;
     long double fact;
     printf("Enter the value of n:\n");
     scanf("%d", &n);
     fact=factorial(n);
     printf("Factorial of %d is: %Lf",n,fact);
     getch();
     return 0;
}
long double factorial(int n)
{
    long double fact;
    if(n>=1)
        {
        fact=n*factorial(n-1);
        return fact;
        }

    else
        return 1;

}
