#include <stdio.h>

int main()

{
    int sample_number, remainder;

    printf("Enter Your Number : ");

    scanf("%d", &sample_number);


   remainder = sample_number % 2;




  if (remainder == 0)
  {
      printf("%d is an Even Number!", sample_number);


  }
  else

  {
      printf("%d is an Odd Number!", sample_number);

  }

  return 0;
}



