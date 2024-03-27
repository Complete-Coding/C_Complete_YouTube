#include<stdio.h>

int main() {
  int num;
  printf("Welcome to printing Tables.");
  printf("\n\nPlease enter the number: ");
  scanf("%d", &num);

  for (int i = 1; i <= 10; i++) {
    printf("%d X %d = %d\n", num, i, num * i);
    if (i == 5) {
      break;
    }
  }

  return 0;
}