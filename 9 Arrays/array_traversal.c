#include<stdio.h>

int main() {
  int marks[10];
  int no_of_students = 10;

  for (int i = 0; i < no_of_students; i++) {
    printf("Please enter marks for Student %d:", i + 1);
    scanf(" %d", &marks[i]);
  }

  for (int i = 0; i < no_of_students; i++) {
    printf("\nMarks of student %d are: %d", (i + 1), marks[i]);
  }

  return 0;
}