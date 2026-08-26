#include <stdio.h>

int reverse(int num, int rev)
{
  if (num == 0)
    return rev;

  return reverse(num / 10, ((rev * 10) + (num % 10)));
}

void isPalindrome(int number)
{
  int rev = 0;
  int reverseNum = reverse(number, rev);

  printf("Reverse number : %d\n", reverseNum);

  if (number == reverseNum)
  {
    printf("%d is a Palindrome Number\n", number);
  }
  else
  {
    printf("%d is a not Palindrome Number\n", number);
  }
}

int main()
{
  isPalindrome(12345);
  isPalindrome(121);

  return 0;
}
