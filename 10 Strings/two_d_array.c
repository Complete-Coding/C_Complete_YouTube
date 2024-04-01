#include<stdio.h>
#include<string.h>

int main() {
  char names[4][20] = {"Prashant", "Ram", "Sonu", "Sameer"};

  for (int i = 0; i < 4; i++) {
    puts(names[i]);
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < strlen(names[i]); j++) {
      printf("%c", names[i][j]);
    }
    printf("\n");
  }
}