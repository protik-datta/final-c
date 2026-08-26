#include <stdio.h>
#include <string.h>

int main()
{
  char sentence[50] = "Programming";
  int count[256] = {0};

  int len = strlen(sentence);

  for (int i = 0; i < len; i++)
  {
    count[(unsigned char)sentence[i]]++;
  }

  for (int i = 0; i < 256; i++)
  {
    if (count[i] > 0)
    {
      printf("%c : %d\n",i, count[i]);
    }
  }

  return 0;

}
