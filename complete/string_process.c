#include <stdio.h>
#include <string.h>

int main()
{
  char word[50];
  int vowel = 0, consonent = 0;
  int totalChar = 0;
  char rev[50];
  int count[265] = {0};
  char withoutDuplicate[50];
  int index = 0;

  printf("Enter a word : \n");
  scanf("%[^\n]", word);

  int len = strlen(word);

  // vowel, consonent, freq and char count
  for (int i = 0; i < len; i++)
  {
    if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
    {
      vowel++;
    }
    else
    {
      consonent++;
    }
    totalChar++;

    count[(unsigned char)word[i]]++;
  }

  printf("Frequency : \n");
  for (int i = 0; i < 256; i++)
  {
    if (count[i] > 0)
    {
      printf("%c : %d\n", i, count[i]);
      withoutDuplicate[index] = (char)i;
      index++;
    }
  }
  withoutDuplicate[index] = '\0';

  // palindrome check
  for (int i = 0; i < len; i++)
  {
    rev[len - 1 - i] = word[i];
  }
  rev[len] = '\0';

  if (strcmp(word, rev) == 0)
  {
    printf("Palindrome\n");
  }
  else
  {
    printf("Not a Palindrome\n");
  }

  printf("Vowels: %d, Consonants: %d, Total: %d\n", vowel, consonent, totalChar);
  printf("Without duplicate: %s\n", withoutDuplicate);

  return 0;
}
