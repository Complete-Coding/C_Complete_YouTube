#include<stdio.h>

int main() {

  // printf("1\n");
  // printf("2\n");
  // printf("3\n");
  // printf("4\n");
  // printf("5\n");
  // printf("6\n");
  // printf("7\n");
  // printf("8\n");
  // printf("9\n");
  // printf("10\n");

  // Initialization
  int num = 1;
  while (num <= 10) { // condition
    printf("%d\n", num);
    num++;  // update
  }
  printf("First Loop has ended\n");

  int num2 = 100;
  while (num2 > 0) {
    printf("%d\n", num2);
    num2--;
  }

  printf("Second Loop has ended");
  return 0;
}