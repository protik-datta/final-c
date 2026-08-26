#include <stdio.h>

int reverseNumber(int number)
{
  int rev = 0;

  while (number != 0)
  {
    int remainder = number % 10;
    rev = (rev * 10) + remainder;
    number = number / 10;
  }

  return rev;
}

int main()
{
  int number;

  printf("Enter a number : \n");
  scanf("%d", &number);

  printf("Reversed Number : %d\n", reverseNumber(number));

  return 0;
}
