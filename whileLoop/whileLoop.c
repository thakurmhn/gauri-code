#include <stdio.h>

int main()

{
    int i = 1;
    float num, product;

    printf("Multiplication table for : ");
    scanf("%f", &num);


    while (i < 11)

    {
        product = num * i;
        printf("\n");
        printf("%f * %d = %f\n", num, i, product);
        ++i;
    }


    return 0;

}
