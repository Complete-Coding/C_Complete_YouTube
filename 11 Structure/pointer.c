#include<stdio.h>

struct Student {
  int rollno;
  char name[10];
  float marks;
};

int main() {
  int a = 5;
  int *ptr = &a;

  struct Student student = {1, "Ram", 45.5};
  struct Student *stu_ptr = &student;

  printf("\nRollNo: %d, Name: %s, Marks: %.2f", student.rollno, student.name, student.marks);

  printf("\nRollNo: %d, Name: %s, Marks: %.2f", (*stu_ptr).rollno, (*stu_ptr).name, (*stu_ptr).marks);

  printf("\nRollNo: %d, Name: %s, Marks: %.2f", stu_ptr->rollno, stu_ptr->name, stu_ptr->marks);
}