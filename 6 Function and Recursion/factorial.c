#include<stdio.h>

int factorial_using_loop(int);
int factorial_using_recursion(int);

int main() {
  int res = factorial_using_loop(4);
  printf("\nFactorial using loop: %d", res);

  int res2 = factorial_using_recursion(5);
  printf("\nFactorial using loop: %d", res2);
  return 0;
}

int factorial_using_recursion(int num) {
  printf(",");
  if (num == 0) {
    return 1;
  }

  return num * factorial_using_recursion(num - 1);
}

int factorial_using_loop(int num) {
  printf(".");
  int result = 1;
  for (int i = 2; i <= num; i++) {
    result *= i;
  }
  return result;
}