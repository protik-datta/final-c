#include <stdio.h>

void findMaxMin(int *arr, int size, int *max, int *min)
{
  *max = *arr;
  *min = *arr;

  for (int i = 0; i < size; i++)
  {
    if (*(arr + i) > *max)
    {
      *max = *(arr + i);
    }

    if (*(arr + i) < *min)
    {
      *min = *(arr + i);
    }
  }
}

int main()
{
  int arr[5] = {22, 37, 83, 49, 23};
  int size = 5;

  int max = 0;
  int min = 0;

  findMaxMin(arr, size, &max, &min);

  printf("Maximum : %d\n", max);
  printf("Minimum : %d\n", min);

  return 0;
}
