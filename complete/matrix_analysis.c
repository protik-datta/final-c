#include <stdio.h>

int main()
{
  int N = 3;
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  int transpose[3][3];

  int rowFound = -1, colFound = -1;
  int mainDiagSum = 0, secDiagSum = 0;
  int max = matrix[0][0];
  int isSymmetric = 1;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      transpose[j][i] = matrix[i][j];

      if (i == j)
      {
        mainDiagSum += matrix[i][j];
      }

      if (i + j == N - 1)
      {
        secDiagSum += matrix[i][j];
      }

      if (matrix[i][j] > max)
      {
        max = matrix[i][j];
        rowFound = i + 1;
        colFound = j + 1;
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (matrix[i][j] != transpose[i][j])
      {
        isSymmetric = 0;
        break;
      }
    }
    if (!isSymmetric)
      break;
  }

  if (isSymmetric == 1)
  {
    printf("Symmetric Matrix\n");
  }
  else
  {
    printf("Not Symmetric Matrix\n");
  }

  printf("Main Diagonal Sum: %d\n", mainDiagSum);
  printf("Secondary Diagonal Sum: %d\n", secDiagSum);
  printf("Max Value: %d at Position (%d, %d)\n", max, rowFound, colFound);

  return 0;
}
