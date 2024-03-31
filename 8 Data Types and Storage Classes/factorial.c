#include<stdio.h>

long factorial(int);

int main() {
  printf("\nFactorial of 4: %ld", factorial(4));
  printf("\nFactorial of 5: %ld", factorial(5));
  printf("\nFactorial of 10: %ld", factorial(10));
  printf("\nFactorial of 15: %ld", factorial(15));
  printf("\nFactorial of 20: %ld", factorial(20));
  printf("\nFactorial of 25: %ld", factorial(25));
  return 0;
}

long factorial(int num) {
  long result = 1;
  for (int i = 2; i <= num; i++) {
    result *= i;
  }
  return result;
}