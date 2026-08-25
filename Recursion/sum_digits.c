#include <stdio.h>

int sumOfDigits(int num)
{
  if (num == 0)
  {
    return 0;
  }

  return num % 10 + sumOfDigits(num / 10);
}

int main()
{
  printf("Sum of digits : %d\n", sumOfDigits(22222));

  return 0;
}
