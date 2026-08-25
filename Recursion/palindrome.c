#include <stdio.h>

int reverse(int num, int rev)
{
  if (num == 0)
  {
    return rev;
  }

  return reverse(num / 10, rev * 10 + num % 10);
}

int main()
{
  int number;

  printf("Enter a number : \n");
  scanf("%d", &number);

  int rev = reverse(number, 0);

  if (number == rev)
  {
    printf("Palindrome\n");
  }
  else
  {
    printf("Not a palindrome\n");
  }

  return 0;
}
