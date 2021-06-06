#include <stdio.h>

int main ()

{
    float value1, value2, answer;
    char operator;

    printf("Enter Your Expression : ");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch(operator)

    {
    case '+':

        answer = value1 + value2;
        printf("%f + %f = %f", value1, value2, answer);
        break;

    case  '-':

        answer = value1 - value2;
        printf("%f - %f = %f", value1, value2, answer);
        break;

    case '*':

        answer = value1 * value2;
        printf("%f * %f = %f", value1, value2, answer);
        break;


    case '/':

        if (value2 == 0)
        printf("Value Undefined!\n");


        else if (value2 > 0)
        answer = value1 / value2;
        printf("%f / %f = %f", value1, value2, answer);


        break;

    default:

        printf("Invalid Input");
        break;


    }

     return 0;


}
