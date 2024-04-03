#include<stdio.h>

int main() {
  FILE *file_pointer;
  char text[100];

  file_pointer = fopen("kgcoding.txt", "r");
  if (file_pointer == NULL) {
    printf("\nFile could not be opened.");
    return 1;
  }

  // fgets(text, 100, file_pointer);
  // printf("\n %s", text);

  char c;
  do {
    c = fgetc(file_pointer);
    printf("%c", c);
  } while (c != EOF);

  int result = fclose(file_pointer);
  if (result == 0) {
    file_pointer = NULL;
  } else {
    printf("\nFile was not closed properly.");
    return 1;
  }
  return 0;
}