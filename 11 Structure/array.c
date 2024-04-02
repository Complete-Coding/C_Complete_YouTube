#include<stdio.h>

struct Student {
  int rollno;
  char name[10];
  float marks;
};

int main() {

  struct Student students[5] = {
    {1, "Ram", 45.5},
    {2, "Shyam", 78.9},
    {3, "Sita", 90},
    {4, "Geeta", 95.5},
    {5, "Sameer", 99.9}
  };

  for (int i = 0; i < 5; i++) {
    printf("\nStudent Name: %s, RollNo: %d, Marks: %.2f",
    students[i].name, students[i].rollno, students[i].marks);
  }
}