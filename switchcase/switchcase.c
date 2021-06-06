#include <stdio.h>

enum Weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()

{
   enum Weekday today;

    today = Monday;

    switch(today)
    {
        case Sunday:
        printf("Today is Sunday!");
        break;

        case Monday:
        printf("Today is Monday!");
        break;

        case Tuesday:
        printf("Today is Tuesday!");
        break;

        case Wednesday:
        printf("Today is Wednesday!");
        break;

        case Thursday:
        printf("Today is Thursday!");
        break;

        case Friday:
        printf("Today is Friday!");
        break;

        case Saturday:
        printf("Today is Saturday!");
        break;

        default:
        printf("Invalid Input!");
        break;



    }

    return 0;




}
