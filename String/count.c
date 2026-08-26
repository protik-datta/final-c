// vowel and consonent count

#include <stdio.h>
#include <string.h>

int main()
{
  char str[50];
  int vowel = 0, consonent = 0;

  printf("Enter a string: ");
  scanf("%[^\n]", str);

  int len = strlen(str);

  for (int i = 0; i < len; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U')
    {
      vowel++;
    }
    else
    {
      consonent++;
    }
  }

  printf("Vowel : %d\nConsonent : %d\n", vowel, consonent);

  return 0;
}
