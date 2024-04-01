#include<stdio.h>
#include<string.h>

int main() {
  char first_name[50];
  char last_name[50];
  printf("Please enter your first name: ");
  fgets(first_name, 50, stdin);
  printf("Please enter your last name: ");
  fgets(last_name, 50, stdin);

  strcat(first_name, last_name);
  printf("Your final name is: %s", first_name);
}