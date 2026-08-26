#include <stdio.h>

int main()
{
  char word[50];

  printf("Enter a word : ");
  scanf(" %[^\n]", word);

  printf("Word : %s\n", word);

  for (int i = 0; word[i] != '\0'; i++)
  {
    if(word[i] >= 'a' && word[i] <= 'z')
    {
      word[i] = word[i] - 32;
    }
  }

  printf("Uppercase : %s\n", word);

}
