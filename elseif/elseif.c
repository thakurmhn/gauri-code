#include <stdio.h>

int main()

{
    float num;

    printf("Type your number : ");

    scanf("%f", &num);

    if (num > 0)
    {
        printf("+%f > 0\n", num);
        printf("Therefore it is Positive!");
    }

    else if (num < 0)

    {
        printf("%f < 0\n", num);
        printf("Therefore it is Negative!");
    }

    else
    {
        printf("0\n");
        printf("Number Equals to Zero\n");
        printf("Your Number is Neither Negative Nor Positive!");

    }

    return 0;
}
