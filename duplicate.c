#include <stdio.h>

void removeDuplicate(char str[])
{
  int seen[256] = {0};
  char result[50];
  int j = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
    int found = seen[(int)str[i]];

    if (found == 0)
    {
      result[j] = str[i];
      j++;

      seen[(int)str[i]] = 1;
    }
  }

  result[j] = '\0';

  printf("Result: %s\n", result);
}

int main()
{
  char word[] = "programming";
  removeDuplicate(word);
  return 0;
}
