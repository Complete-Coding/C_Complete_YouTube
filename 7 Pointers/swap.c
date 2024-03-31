#include<stdio.h>

void swap(int*, int*);

int main() {
  int x = 4;
  int y = 87;
  printf("Value of x=%d, value of Y=%d", x, y);
  swap(&x, &y);
  printf("\nValue of x=%d, value of Y=%d", x, y);
}

void swap(int* ptr1, int* ptr2) {
  printf("\nValue of ptr1=%d, value of ptr2=%d", *ptr1, *ptr2);
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
  printf("\nValue of ptr1=%d, value of ptr2=%d", *ptr1, *ptr2);
}