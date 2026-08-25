#include <stdio.h>

int main()
{
  int number;

  FILE *num_file = fopen("numbers.txt", "r");
  if (num_file == NULL)
  {
    printf("numbers.txt file not found!\n");
    return 1;
  }

  FILE *even_file = fopen("even.txt", "w");
  if (even_file == NULL)
  {
    printf("Error opening even.txt for writing!\n");
    fclose(num_file);
    return 1;
  }

  for (int i = 0; i < 20; i++)
  {
    fscanf(num_file, "%d", &number);

    if (number % 2 == 0)
    {
      fprintf(even_file, "%d\n", number);
    }
  }

  fclose(num_file);
  fclose(even_file);

  even_file = fopen("even.txt", "r");
  if (even_file == NULL)
  {
    printf("even.txt file not found!\n");
    return 1;
  }

  printf("\nEven numbers from even.txt:\n");

  while (fscanf(even_file, "%d", &number) != EOF)
  {
    printf("%d\n", number);
  }

  fclose(even_file);

  return 0;
}
