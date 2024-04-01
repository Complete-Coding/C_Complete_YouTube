#include<stdio.h>

int main() {
  char name[] = "Prashant Jain";
  printf("Array: Before modifying: %s\n", name);
  name[9] = 'j';
  printf("Array: After modifying: %s\n", name);

  char *nick_name = "Prashant Jain";
  printf("Pointer: Before modifying: %s\n", nick_name);
  nick_name[9] = 'j';
  printf("Pointer: After modifying: %s\n", nick_name);
}