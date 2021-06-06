  #include <stdio.h>

int main()

{
    float num1, num2;

    printf("Enter your first number : ");

    scanf("%f", &num1);

    printf("Enter your second number : ");

    scanf("%f", &num2);

    if (num1 > num2)

    {
        printf("%f > %f", num1, num2);
    }

    else if (num2 > num1)

    {
        printf("%f > %f", num2, num1);
    }

    else
    {
        printf("%f = %f", num1, num2);
    }

    return 0;
}
