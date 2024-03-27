#include<stdio.h>

int main() {

  for (int i = 1; i <= 100; i++) {
    if (i % 2 == 0) {
      continue;
    }
    printf("%d\n", i);
  }

  int num2 = 1;
  while (num2 <= 100) {
    printf(".");
    if (num2 % 2 == 0) {
      num2++;
      continue;
    }
    printf("%d\n", num2);
    num2++;
  }

  return 0;
}