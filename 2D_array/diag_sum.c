#include <stdio.h>

int main()
{
  int matrix[3][3] = {
      {2, 4, 2},
      {8, 10, 12},
      {14, 16, 18}};
  int mainDiag = 0;
  int secDiag = 0;
  int N = 3;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i == j)
      {
        mainDiag += matrix[i][j];
      }
      if (i + j == N - 1)
      {
        secDiag += matrix[i][j];
      }
    }
  }

  printf("Main Diagonal Sum : %d\n", mainDiag);
  printf("Secondary Diagonal Sum : %d\n", secDiag);

  return 0;
}
