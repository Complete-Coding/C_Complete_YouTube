#include<stdio.h>

struct Student {
  int rollno;
  char name[10];
  float marks;
};

int main() {
  // Direct initialization
  struct Student s1 = {1, "Ram", 99.89};
  // Designated initializaiton
  struct Student s2 = {.name = "Shyam", .marks = 70.12, .rollno = 2};
  // Zero initialization
  struct Student s3 = {0};
  // Copy initialization
  struct Student s4 = s1;
  s4.rollno = 4;


  printf("\nRollNo: %d, Name: %s, Marks: %.2f", s1.rollno, s1.name, s1.marks);
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", s2.rollno, s2.name, s2.marks);
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", s3.rollno, s3.name, s3.marks);
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", s4.rollno, s4.name, s4.marks);
  
  return 0;
}