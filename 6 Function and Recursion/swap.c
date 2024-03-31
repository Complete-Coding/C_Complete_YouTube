#include<stdio.h>

void swap(int, int);

int main() {
  int x = 4;
  int y = 7;
  printf("\nx: %d, y:%d", x, y);
  swap(x, y);
  printf("\nx: %d, y:%d", x, y);
  return 0;
}

void swap(int first, int second) {
  printf("\nfirst: %d, second: %d", first, second);
  int temp = first;
  first = second;
  second = temp;
  printf("\nfirst: %d, second: %d", first, second);
}