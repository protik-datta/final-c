#include <stdio.h>

int main()
{
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9}};
  int row1 = 0, row2 = 0, row3 = 0;
  int col1 = 0, col2 = 0, col3 = 0;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == 0)
        row1 += matrix[i][j];
      if (i == 1)
        row2 += matrix[i][j];
      if (i == 2)
        row3 += matrix[i][j];
      if (j == 0)
        col1 += matrix[i][j];
      if (j == 1)
        col2 += matrix[i][j];
      if (i == 2)
        col3 += matrix[i][j];
    }
  }

  printf("Row 1 Sum: %d\n", row1);
  printf("Row 2 Sum: %d\n", row2);
  printf("Row 3 Sum: %d\n\n", row3);

  printf("Col 1 Sum: %d\n", col1);
  printf("Col 2 Sum: %d\n", col2);
  printf("Col 3 Sum: %d\n", col3);

  return 0;
}
