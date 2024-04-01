#include<stdio.h>

void print_marks(int marks[], int no_of_students);

int main() {
  int marks[5];
  int no_of_students = 5;

  for (int i = 0; i < no_of_students; i++) {
    printf("Please enter marks for Student %d:", i + 1);
    scanf(" %d", &marks[i]);
  }

  print_marks(marks, no_of_students);

  return 0;
}

void print_marks(int student_marks[], int student_count) {
  for (int i = 0; i < student_count; i++) {
    printf("\nMarks of student %d are: %d", (i + 1),
     student_marks[i]);
  } 
}