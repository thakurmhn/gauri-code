 #include <stdio.h>
#include <stdlib.h>


//  preprocessor directive
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40
/*

A program that calculates weekly pay
Ask the user to enter the number of hours worked via Keyboard
Output should be grossPay, taxes, and netPay

Following assumptions should be made...

*Basic Pay rate = $12.00/hr
*Overtime (in excess of 40 hours) = time and a half  (multiply Payrate by 1.5)
*Tax Rate:
   15% of the first $300 dollars
   20% of the next $150 dollars
   25% of the Rest

*/
int main()
{
    //declaring variables

    int hours = 0;
    double grossPay = 0.0;
     double taxes = 0.0;
    double netPay = 0.0;

    printf("Enter the number of hours worked this week : ");

    scanf("%d", &hours);
   // to calculate gross pay

    if (hours <= 40)
    {
        grossPay = hours * PAYRATE;


    }

    else
    {
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }

    //to calculate taxes

    if (grossPay <= 300)
    {
        taxes = grossPay * TAXRATE_300;

    }

    else if(grossPay > 300 && grossPay <= 450)
    {
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;

    }

    else if(grossPay > 450)

    {
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay - 450) * TAXRATE_REST;

    }


    // to calculate net pay

    netPay = grossPay - taxes;


    printf("Your Gross Pay is :$ %.2lf\n", grossPay);
    printf("Your Taxes are :$ %.2lf\n", taxes);
    printf("Your Net Pay is :$ %.2lf", netPay);

    return 0;
}
