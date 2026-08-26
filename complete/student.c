#include <stdio.h>

struct Student
{
  int stdID;
  char name[50];
  int marks[3];
  int totalMark;
  float average;
};

int main()
{
  int N;

  printf("Enter student number : \n");
  scanf("%d", &N);

  struct Student s[N];
  FILE *fileWrite = fopen("students.txt", "w");

  if (fileWrite == NULL)
  {
    printf("Error opening student file");
    return 1;
  }

  for (int i = 0; i < N; i++)
  {
    scanf("%d", &s[i].stdID);
    scanf(" %[^\n]", s[i].name);

    for (int j = 0; j < 3; j++)
    {
      scanf("%d", &s[i].marks[j]);
    }

    fprintf(fileWrite, "%d\n%s\n%d %d %d\n", s[i].stdID, s[i].name, s[i].marks[0], s[i].marks[1], s[i].marks[2]);
  }

  fclose(fileWrite);

  FILE *fileRead = fopen("students.txt", "r");
  if (fileRead == NULL)
  {
    printf("Error opening student file");
    return 1;
  }

  struct Student topper;
  float highestAvg = -1;

  for (int i = 0; i < N; i++)
  {
    fscanf(fileRead, "%d\n%[^\n]\n%d %d %d\n",
           &s[i].stdID, s[i].name, &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);

    s[i].totalMark = s[i].marks[0] + s[i].marks[1] + s[i].marks[2];
    s[i].average = s[i].totalMark / 3.00;

    if (s[i].average > highestAvg)
    {
      highestAvg = s[i].average;
      topper = s[i];
    }
  }

  fclose(fileRead);

  printf("\nOutput:\n\nTopper:\n");
  printf("ID: %d\n", topper.stdID);
  printf("Name: %s\n", topper.name);
  printf("Total: %d\n", topper.totalMark);
  printf("Average: %.2f\n", topper.average);

  FILE *topperFile = fopen("topper.txt", "w");
  if (topperFile != NULL)
  {
    fprintf(topperFile, "Topper:\nID: %d\nName: %s\nTotal: %d\nAverage: %.2f\n",
            topper.stdID, topper.name, topper.totalMark, topper.average);
    fclose(topperFile);
  }

  return 0;
}
