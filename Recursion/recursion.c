#include <stdio.h>

void printHW(int n)
{
  if(n == 0){
    return;
  }

  printf("Hello World\n");
  printHW(n - 1);
}

int main()
{
  printHW(5);
  return 0;
}
