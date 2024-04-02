#include<stdio.h>
#include<stdlib.h>

int main() {
  int size;
  printf("Enter the number of elements: ");
  scanf(" %d", &size);

  int *arr = (int*) calloc(size, sizeof(int));
  if (arr == NULL) {
    printf("Not enough memory");
    return 1;
  }

  for (int i = 0; i < size; i++) {
    printf(" %d", arr[i]);
  }

  for (int i = 0; i < size; i++) {
    printf("Enter element number %d: ", i+1);
    scanf("%d", &arr[i]);
  }

  long sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  printf("The sum of all elements is: %ld", sum);
  return 0;
}