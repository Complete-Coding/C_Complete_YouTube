#include<stdio.h>

int main() {

  int i = 1;
  do {
    printf("%d\n", i);
    i++;
  } while (i <= 10);

  int num;
  do {
    printf("Please enter the number: ");
    scanf("%d", &num);
  } while (num != 10);

  printf("Congrats you have guessed the correct number");

  return 0;
}