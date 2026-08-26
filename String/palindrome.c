#include <stdio.h>
#include <string.h>

int isPalindrom(char str[])
{
  int len = strlen(str);
  char rev[50];

  for (int i = len - 1, j = 0; i >= 0; i--, j++)
  {
    rev[j] = str[i];
  }

  if (strcmp(rev, str) == 0)
  {
    return 1;
  }

  return 0;
}

int main()
{
  char words[5][50] = {"madam", "hello", "level", "world", "radar"};

  printf("Palindromes are : ");

  for (int i = 0; i < 5; i++)
  {
    if (isPalindrom(words[i]))
    {
      printf("%s ", words[i]);
    }
  }

  return 0;
}
