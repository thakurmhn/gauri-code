#include <stdio.h>


int main()

{
    double num1, num2, quotient;

    printf("Enter Your First No. :");

    scanf("%lf", &num1);

    printf("Enter Your Second No. :");

    scanf("%lf", &num2);

    quotient = num1 / num2;

    printf("%lf / %lf  = %lf", num1, num2, quotient);

    return 0;
}
