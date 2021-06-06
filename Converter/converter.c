#include <stdio.h>

int main()

{
    double minutes, days, years;

    printf("Enter No. of Minutes : ");

    scanf("%lf", &minutes);

    /* 1 hour = 60 minutes
       1 day  = 24 hours
    so 1 day  = 24 * 60 minutes
              = 1440 minutes

       1 year = 365 days
              = 365 * 24 * 60 minutes
              = 365 * 1440 minutes
              = 525600 minutes
    */

    days = minutes / 1440;

    years = minutes / 525600;

    printf(" %lf Minutes = %lf days\n", minutes, days);

    printf(" %lf Minutes = %lf years", minutes, years);

    return 0;


}
