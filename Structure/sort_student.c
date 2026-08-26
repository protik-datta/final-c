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
  printf("Enter number of students: ");
  scanf("%d", &n);

  struct Student s[n];

  printf("Enter details (ID, Name, CGPA) for each student:\n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &s[i].ID);
    scanf(" %[^\n]", s[i].Name);
    scanf("%f", &s[i].CGPA);
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (s[j].CGPA < s[j + 1].CGPA)
      {
        struct Student temp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = temp;
      }
    }
  }

  printf("\n--- Students Sorted by CGPA ---\n");
  for (int i = 0; i < n; i++)
  {
    printf("ID: %d, Name: %s, CGPA: %.2f\n", s[i].ID, s[i].Name, s[i].CGPA);
  }

  return 0;
}
