#include <stdio.h>

// Define macro to check maximum and minimum

#define MIN(x, y) (x < y ? x : y)

int main()
{
    int num1, num2, num3;

    // Input numbers from user
    printf("Enter any three number to check  min: ");
    scanf("%d%d%d", &num1, &num2,&num3);

    printf("MIN(%d, %d) = %d\n", num1, num2, MIN(num1,MIN(num2,num3) ));

    return 0;
}
