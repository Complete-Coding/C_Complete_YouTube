#include<stdio.h>

int main() {

  int num = 0;
  while (num != 10) {
    printf("Please enter the number: ");
    scanf("%d", &num);
  }

  printf("Congrats you have guessed the correct number");

  return 0;
}