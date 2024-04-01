#include<stdio.h>

int main() {
  int marks1, marks2, marks3, marks4, marks5;

  printf("Please enter marks for Student 1:");
  scanf(" %d", &marks1);
  printf("Please enter marks for Student 2:");
  scanf(" %d", &marks2);
  printf("Please enter marks for Student 3:");
  scanf(" %d", &marks3);
  printf("Please enter marks for Student 4:");
  scanf(" %d", &marks4);
  printf("Please enter marks for Student 5:");
  scanf(" %d", &marks5);

  printf("\nMarks of student 1 are: %d", marks1);
  printf("\nMarks of student 2 are: %d", marks2);
  printf("\nMarks of student 3 are: %d", marks3);
  printf("\nMarks of student 4 are: %d", marks4);
  printf("\nMarks of student 5 are: %d", marks5);

  return 0;
}