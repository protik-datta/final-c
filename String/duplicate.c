#include <stdio.h>
#include <string.h>

int main()
{
  int word[50] = "Programming";
  int seen[256] = {0};
  char result[50];
  int j = 0;

  int len = strlen(word);

  for (int i = 0; word[i] != '\0'; i++)
  {
    int found = seen[(int)word[i]];

    if (found == 0)
    {
      result[j] = word[i];
      j++;

      seen[(int)word[i]] = 1;
    }
  }

  result[j] = '\0';

  printf("Result: %s\n", result);

  return 0;
}
