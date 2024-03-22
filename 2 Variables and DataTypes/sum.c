#include<stdio.h>

int main() {
  int num1, num2, sum;
  printf("Welcome to Sum Calculator\n");
  printf("Please enter the first number: ");
  scanf("%d", &num1);
  printf("Now, enter the second number: ");
  scanf("%d", &num2);

  sum = num1 + num2;
  printf("Sum of the two numbers is: %d", sum);
  return 0;
}