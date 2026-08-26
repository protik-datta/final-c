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

  int found = 0;
  int std_id;
  int foundIndex = -1;

  printf("Enter the student ID of the student you want to find: ");
  scanf("%d", &std_id);

  for (int i = 0; i < n; i++)
  {
    if (s[i].ID == std_id)
    {
      found = 1;
      foundIndex = i;
      break;
    }
  }

  if (found == 1)
  {
    printf("Student found\n");
    printf("Name : %s\n", s[foundIndex].Name);
    printf("CGPA : %.2f\n", s[foundIndex].CGPA);
  }
  else
  {
    printf("Student not found\n");
  }

  return 0;
}
