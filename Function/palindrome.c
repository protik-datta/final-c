#include <stdio.h>

void isPalindrome(int number)
{
  int original = number;
  int reverse = 0;

  while (number != 0)
  {
    int remainder = number % 10;
    reverse = (reverse * 10) + remainder;
    number /= 10;
  }

  if (original == reverse)
  {
    printf("Palindrome\n");
  }
  else
  {
    printf("Not Palindrome\n");
  }

}

int main()
{
  int number = 111;

  isPalindrome(number);
}
