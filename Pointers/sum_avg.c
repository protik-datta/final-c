#include <stdio.h>

void calculateSumAvg(int *arr, int size, float *sum, float *avg)
{
  *sum = 0;
  for (int i = 0; i < size; i++)
  {
    *sum += *(arr + i);
  }

  *avg = (float)*sum / size;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  int size = 5;
  float sum;
  float avg;

  calculateSumAvg(arr, size, &sum, &avg);

  printf("Output:\n");
  printf("Sum = %.2f\n", sum);
  printf("Average = %.2f\n", avg);

  return 0;
}
