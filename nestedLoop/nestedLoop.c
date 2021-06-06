#include <stdio.h>

int main()

{
    int h;
    int i;
    int j;
    float num, product;
    float num_1;
    float num1;

    printf("Multiplication table for : ");
    scanf("%f", &num);

    for(h = 1; h<= 10; ++h)
        {

           num_1 = num - 1;
           product = num_1 * h;
           printf("%f * %d = %f\n",num_1, h, product);


        }
    printf("\n");
    for(i = 1; i <=10; ++i)
        {

           product = num * i;
           printf("%f * %d = %f\n", num, i, product);

        }
    printf("\n");
    for(j = 1; j <= 10; ++j)
        {
            num1 = num + 1;
            product = num1 * j;
            printf("%f * %d = %f\n", num1, j, product);

        }





    return 0;
}
