#include <stdio.h>
#include <string.h>

int countWords(char s[])
{
  int count = 0;
  int strLen = strlen(s);

  for (int i = 0; i < strLen; i++)
  {
    if (s[i] == ' ')
    {
      count++;
    }
  }

  return count + 1;
}

int main()
{
  char sentence[] = "I love you Messi";

  int wordCount = countWords(sentence);

  printf("Word count : %d\n", wordCount);

  return 0;
}
