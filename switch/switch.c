#include <stdio.h>

int main()

{
    int Id = 500;
    int password = 000;

    printf("Enter your Id : ");
    scanf("%d", &Id);

    switch(Id)

    {
    case 500:
        printf("Enter your password :");
        scanf("%d", &password);

        switch(password)
        {
        case 000:
            printf("Welcome");
            break;

        default:
            printf("incorrect password");
            break;


        }
        break;

    default:
        printf("incorrect Id");
        break;
    }

    return 0;
}
