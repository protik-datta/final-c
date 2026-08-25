#include <stdio.h>

struct Student
{
  int ID;
  char Name[50];
  float CGPA;
};

int main()
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  FILE *input_file = fopen("student.txt", "w");

  if (input_file == NULL)
  {
    printf("No input file found\n");
    return 1;
  }

  struct Student s[n];

  for (int i = 0; i < n; i++)
  {
    printf("\nStudent %d Details:\n", i + 1);

    printf("Enter ID: \n");
    scanf("%d", &s[i].ID);

    printf("Enter Name: \n");
    scanf(" %[^\n]", s[i].Name);

    printf("Enter CGPA: \n");
    scanf("%f", &s[i].CGPA);

    fprintf(input_file, "%d\n%s\n%.2f\n", s[i].ID, s[i].Name, s[i].CGPA);
  }

  fclose(input_file);

  FILE *output_file = fopen("student_output.txt", "w");

  if (output_file == NULL)
  {
    printf("No output file found\n");
    fclose(input_file);
    return 1;
  }

  input_file = fopen("student.txt", "r");

  if (input_file == NULL)
  {
    printf("No input file found\n");
    fclose(output_file);
    return 1;
  }

  for (int i = 0; i < n; i++)
  {
    fscanf(input_file, "%d", &s[i].ID);
    fgetc(input_file);
    fscanf(input_file, "%[^\n]", s[i].Name);
    fscanf(input_file, "%f", &s[i].CGPA);
  }

  for (int i = 0; i < n; i++)
  {
    fprintf(output_file, "-------- Student %d --------\n", i + 1);
    fprintf(output_file, "ID : %d\n", s[i].ID);
    fprintf(output_file, "Name : %s\n", s[i].Name);
    fprintf(output_file, "CGPA : %.2f\n", s[i].CGPA);
  }

  fclose(input_file);
  fclose(output_file);

  return 0;
}
