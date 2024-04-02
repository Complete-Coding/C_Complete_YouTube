#include<stdio.h>
#include<stdlib.h>

int main() {
  int *arr = (int*) calloc(2, sizeof(int));
  if (arr == NULL) {
    printf("Not enough memory");
    return 1;
  }
  printf("\nAddress of arr: %p", arr);
  arr[0] = 45;
  arr[1] = 74;

  arr = (int*) realloc(arr, 3 * sizeof(int));
  if (arr == NULL) {
    printf("Not enough memory");
    return 1;
  }
  printf("\nNew Address of arr: %p", arr);
  printf("\nOriginal elements are: %d %d", arr[0], arr[1]);
  arr[2] = 98;
  return 0;
}