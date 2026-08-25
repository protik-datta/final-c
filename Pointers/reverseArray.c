#include <stdio.h>

void reverseArray(int *arr, int *reversed, int size)
{
  for (int i = size - 1, j = 0; i >= 0; i--, j++)
  {
    reversed[j] = arr[i];
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  int reversed[size];

  reverseArray(arr, reversed, size);

  printf("Output:\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", *(reversed + i));
  }
  printf("\n");

  return 0;
}
