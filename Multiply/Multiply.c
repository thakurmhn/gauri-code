#include <stdio.h>

int main()

{
    double num1, num2, product;

    printf("Enter Your First No. : ");

    scanf("%lf", &num1);

    printf("Enter Your Second No. : ");

    scanf("%lf", &num2);

    product = num1 * num2;

    printf(" %lf * %lf = %lf", num1, num2, product);

    return 0;
}
