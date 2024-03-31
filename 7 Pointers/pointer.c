#include<stdio.h>

int main() {
  int i = 3;
  //int *j = &i;
  int *j;
  j = &i;
  int **k;
  k = &j;

  printf("Address of i = %p", &i);
  printf("\nAddress of i = %p", j);
  printf("\nAddress of i = %p", *k);
  printf("\nAddress of j = %p", &j);
  printf("\nAddress of j = %p", k);
  printf("\nAddress of k = %p", &k);
  printf("\nValue of j = %p", j);
  printf("\nValue of k = %p", k);
  printf("\nValue of i = %d", i);
  printf("\nValue of i = %d", *(&i));
  printf("\nValue of i = %d", *j);
  printf("\nValue of i = %d", **k);
  return 0;
}