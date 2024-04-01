#include<stdio.h>

int main() {

  char name[50];
  // printf("Please enter your name: ");
  // gets(name);
  // printf("Good morning ");
  // puts(name);

  printf("Now enter your nickname: ");
  fgets(name, sizeof(name), stdin);
  printf("Good morning ");
  puts(name);

  return 0;
}