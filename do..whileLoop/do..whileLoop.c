#include <stdio.h>

int main()

{
   int i = 1;
   float num, product;


   printf("Multiplication Table For : ");
   scanf("%f", &num);


   do
   {
      product = num * i;
      printf("\n");
      printf("%f * %i = %f\n", num, i, product);
      i += 1;
   }

   while(i < 11);


    return 0;

}
