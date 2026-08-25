#include <stdio.h>

int findMax(int *arr, int size)
{
  int max = *arr;

  for (int i = 0; i < size; i++)
  {
    if (*(arr + i) > max)
    {
      max = *(arr + i);
    }
  }

  return max;
}

int main()
{
  int arr[] = {10, 25, 7, 40, 15};
  int size = 5;

  int max = findMax(arr, size);
  printf("Output: Maximum = %d\n", max);

  return 0;
}
