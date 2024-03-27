#include<stdio.h>

int main() {
  int age;
  char is_indian;
  printf("Welcome to ARTO.\nPlease enter your age: ");
  scanf("%d", &age);
  printf("Are you an Indian Citizen(Y/N): ");
  scanf(" %c", &is_indian);

  if (is_indian == 'Y' || (age >= 18 && age < 70)) {
    printf("You are eligible for a license.\n");
  } else {
    printf("You are not eligible.\n");
  }

  printf("Your age is: %d", age);
  return 0;
}