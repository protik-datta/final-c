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
  printf("Reverse : %d\n", reverse(12345, 0));

  return 0;
}
