#include<stdio.h>
#include<string.h>

int main() {

  int result = strcmp("apple", "banana");
  printf("\nComparison of apple and banana is: %d", result);

  result = strcmp("cherry", "banana");
  printf("\nComparison of cherry and banana is: %d", result);

  result = strcmp("date", "date");
  printf("\nComparison of date and date is: %d", result);
  return 0;
}