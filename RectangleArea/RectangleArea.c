#include <stdio.h>

int main()

{
    double width, height, perimeter, area;

    printf("Enter Rectangle Width : ");

    scanf("%lf", &width);

    printf("Enter Rectangle Height : ");

    scanf("%lf", &height);

    perimeter = 2 * (width + height);

    area = width * height;

    printf("Rectangle Perimeter = %lf\n", perimeter);

    printf("Rectangle Area = %lf\n", area);

    return 0;

}
