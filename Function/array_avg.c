#include <stdio.h>

int arrayAvg(int arr[], int size)
{
  int sum = 0;

  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }

  float avg = (float)sum / size;

  return avg;
}

int main()
{
  int arr[5] = {20, 30, 20, 30, 40};
  int size = 5;

  printf("Average : %d\n", arrayAvg(arr, size));

  return 0;
}
