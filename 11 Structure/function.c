#include<stdio.h>

struct Student {
  int rollno;
  char name[10];
  float marks;
};

// Call by value
void print_student(struct Student stu);

// Call by reference
void print_student_from_pointer(struct Student *stu);

int main() {
  int a = 5;
  int *ptr = &a;

  struct Student student = {1, "Ram", 45.5};
  struct Student *stu_ptr = &student;

  print_student(student);
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", student.rollno, student.name, student.marks);
  
  print_student_from_pointer(stu_ptr);
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", student.rollno, student.name, student.marks);
}

void print_student(struct Student stu) {
  stu.rollno = 5;
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", stu.rollno, stu.name, stu.marks);
}

void print_student_from_pointer(struct Student *ptr) {
  ptr->rollno = 6;
  printf("\nRollNo: %d, Name: %s, Marks: %.2f", ptr->rollno, ptr->name, ptr->marks);
}