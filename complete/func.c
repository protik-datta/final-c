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

int findMin(int *arr, int size)
{
  int min = *arr;

  for (int i = 0; i < size; i++)
  {
    if (*(arr + i) < min)
    {
      min = *(arr + i);
    }
  }

  return min;
}

int calculateSum(int *arr, int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += *(arr + i);
  }

  return sum;
}

void sortArray(int *arr, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1 - i; j++)
    {
      if (*(arr + j) > *(arr + j + 1))
      {
        int temp = *(arr + j);
        *(arr + j) = *(arr + j + 1);
        *(arr + j + 1) = temp;
      }
    }
  }
}

int main()
{
  int arr[] = {5, 2, 8, 1, 9, 3};
  int size = 6;

  printf("Max: %d\n", findMax(arr, size));
  printf("Min: %d\n", findMin(arr, size));
  printf("Sum: %d\n", calculateSum(arr, size));

  sortArray(arr, size);

  printf("Sorted: ");
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");

  return 0;
}
