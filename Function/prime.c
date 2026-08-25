#include <stdio.h>

int isPrime(int n)
{
  if(n <= 1)
  {
    return 0;
  }

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }

  return 1;
}

int main()
{
  int i;

  for (i = 1; i <= 50; i++)
  {
    if (isPrime(i))
    {
      printf("%d is Prime Number\n", i);
    }
    else
    {
      printf("%d is not Prime Number\n", i);
    }
  }

  return 0;
}
