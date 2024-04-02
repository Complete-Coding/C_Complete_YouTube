#include<stdio.h>

// struct Student {
//   int rollno;
//   char name[10];
//   float marks;
// };

typedef struct {
  int rollno;
  char name[10];
  float marks;
} Student;

int main() {
  typedef int prashant;

  prashant i = 5;



  Student student = {1, "Ram", 45.5};
  //Stu shaym = {2, "Shyam", 70};

  // for (int i = 0; i < 5; i++) {
  //   printf("\nStudent Name: %s, RollNo: %d, Marks: %.2f",
  //   students[i].name, students[i].rollno, students[i].marks);
  // }
}