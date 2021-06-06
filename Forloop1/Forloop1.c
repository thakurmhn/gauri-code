#include <stdio.h>


int main()

{
    int i;
    float num, product;

    printf("Multiplication table for : ");
    scanf("%f", &num);

    for (i = 1; i < 11; ++i)

    {
        product = num * i;
        printf("\n");
        printf("%f * %d = %f\n", num, i, product);
    }

    return 0;
}
