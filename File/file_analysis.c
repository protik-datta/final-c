#include <stdio.h>
#include <string.h>

int main()
{
  char sentence[200];
  int num_char = 0, num_words = 0;

  FILE *text_file = fopen("text.txt", "w");
  if (text_file == NULL)
  {
    printf("NO text file found\n");
    return 1;
  }

  printf("Enter a sentence: ");
  scanf(" %[^\n]", sentence);

  fprintf(text_file, "%s", sentence);
  fclose(text_file);

  text_file = fopen("text.txt", "r");
  if (text_file == NULL)
  {
    printf("NO text file found\n");
    return 1;
  }

  fscanf(text_file, " %[^\n]", sentence);
  fclose(text_file);

  int len = strlen(sentence);

  num_char = len;

  if (len > 0)
  {
    num_words = 1;
    for (int i = 0; i < len; i++)
    {
      if (sentence[i] == ' ')
      {
        num_words++;
      }
    }
  }

  printf("\n--- File Analysis ---\n");
  printf("Sentence from file: %s\n", sentence);
  printf("Number of characters : %d\n", num_char);
  printf("Number of words      : %d\n", num_words);

  return 0;
}
