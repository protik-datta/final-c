#include <stdio.h>

int main()
{
  int matrix[3][3] = {
      {2, 4, 2},
      {8, 10, 12},
      {14, 16, 18}};
  int transpose[3][3];
  int N = 3;

  printf("Before Transpose : \n");
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      transpose[j][i] = matrix[i][j];
    }
  }

  printf("After transpose : \n");
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%d ", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}
