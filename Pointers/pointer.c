#include <stdio.h>

int main()
{
  int a = 10;
  int b = 12;
  int *p = &a;
  int *q = &b;

  *p = 30;

  printf("Value of a: %d\n", a);
  printf("Address of a: %p\n", &a);
  printf("Value of p (address it holds): %p\n", p);
  printf("Value pointed by p: %d\n", *p);
  printf("Value pointed by q: %d\n", *q);
  printf("Value of q (address it holds): %p\n", q);

  return 0;
}
