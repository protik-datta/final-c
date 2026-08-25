#include <stdio.h>

int main()
{
  int number;
  int sum = 0;
  float avg = 0;

  FILE *num_file = fopen("numbers.txt", "w");

  if (num_file == NULL)
  {
    printf("NO file found");
    fclose(num_file);
    return 1;
  }

  printf("Enter numbers : \n");
  for (int i = 0; i < 10; i++)
  {
    scanf("%d", &number);
    fprintf(num_file, "%d\n", number);
  }

  fclose(num_file);

  num_file = fopen("numbers.txt", "r");
  if (num_file == NULL)
  {
    printf("NO file found");
    return 1;
  }

  FILE *sum_avg = fopen("sum_avg.txt", "w");
  if (sum_avg == NULL)
  {
    printf("NO file found");
    fclose(sum_avg);
    return 1;
  }

  for (int i = 0; i < 10; i++)
  {
    fscanf(num_file, "%d", &number);
    sum += number;
  }

  avg = sum / 10;

  fprintf(sum_avg, "Sum = %d\n", sum);
  fprintf(sum_avg, "Average = %.2f\n", avg);

  fclose(num_file);
  fclose(sum_avg);

  return 0;
}
