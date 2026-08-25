#include <stdio.h>

int main()
{
  char text[1000];

  FILE *source = fopen("source.txt", "r");
  if (source == NULL)
  {
    printf("NO file found to read\n");
    return 1;
  }

  FILE *copy = fopen("copy.txt", "w");
  if (copy == NULL)
  {
    printf("NO file found to read\n");
    fclose(source);
    return 1;
  }

  while (fgets(text, sizeof(text), source) != NULL)
  {
    fprintf(copy, "%s", text);
  }

  fclose(source);
  fclose(copy);

  copy = fopen("copy.txt", "r");
  if (copy == NULL)
  {
    printf("NO file found to read\n");
    return 1;
  }

  printf("Content from copy.txt:\n");
  while (fgets(text, sizeof(text), copy) != NULL)
  {
    printf("%s", text);
  }

  fclose(copy);

  return 0;
}
