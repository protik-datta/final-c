#include <stdio.h>

int power(int x, int n)
{
  if (n == 0)
  {
    return 1;
  }

  return x * power(x, n - 1);
}

int main()
{
  printf("Answer : %d\n", power(2, 5));

  return 0;
}
