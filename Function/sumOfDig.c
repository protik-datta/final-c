#include <stdio.h>

int sumOfDigit(int number)
{
  int sum = 0;

  while (number != 0)
  {
    int remainder = number % 10;
    sum += remainder;
    number = number / 10;
  }

  return sum;
}

int main()
{
  int number = 112;

  printf("Sum of Digits : %d\n", sumOfDigit(number));

  return 0;
}
