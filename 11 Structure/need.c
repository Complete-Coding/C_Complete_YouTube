#include<stdio.h>

int main() {
  int rollno[5] = {1, 2, 3, 4, 5};
  char names[5][20] = {"Ram", "Shyam", "Sita", "Geeta", "Sameer"};
  float marks[5] = {45.5, 78.9, 90, 95.5, 99.9};

  for (int i = 0; i < 5; i++) {
    printf("\nStudent Name: %s, RollNo: %d, Marks: %.2f",
    names[i], rollno[i], marks[i]);
  }
}