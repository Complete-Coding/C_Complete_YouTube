#include<stdio.h>

void count_to_100();
int sum(int, int);

int main() {
  count_to_100();
  int add = sum(4, 5);
  printf("\nthe sum is: %d", add);

  int x = 9;
  int y = 54;
  int z = sum(x, y);
  printf("\nthe sum is: %d", z);
  return 0;
}

void count_to_100() {
  for (int i = 1; i <= 100; i++) {
    printf(" %d", i);
  }
}

int sum(int first, int second) {
  int addition = first + second;
  return addition;
}