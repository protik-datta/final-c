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
  printf("Enter number of student : \n");
  scanf("%d", &n);

  struct Student s[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &s[i].ID);
    scanf(" %[^\n]", s[i].Name);
    scanf("%f", &s[i].CGPA);
  }

  printf("Most CGPA achived by : \n");
  for (int i = 0; i < n; i++)
  {
    if (s[i].CGPA > 3.50)
    {
      printf("Student Id : %d\nStudent Name : %s\n", s[i].ID, s[i].Name);
    }
  }

  return 0;
}
