#include<stdio.h>

int main() {
  char c[50];
  printf("Please enter your name: ");
  scanf(" %49s", c);
  printf("Good morning %s", c);
}