#include <stdio.h>

int main()

{
    double num1, num2, subtraction;

    printf("Enter First Number :\n");

    scanf("%lf", &num1);

    printf("Enter Second Number :\n");

    scanf("%lf", &num2);

    subtraction = num1 - num2;

    printf(" %lf - %lf = %lf", num1, num2, subtraction);

    return 0;


}
