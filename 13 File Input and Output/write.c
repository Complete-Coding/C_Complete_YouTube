#include<stdio.h>

int main() {
  FILE *file_pointer;

  file_pointer = fopen("writing.txt", "a");
  if (file_pointer == NULL) {
    printf("\nFile could not be opened.");
    return 1;
  }

  fprintf(file_pointer, "This is my first write operation\n");
  fprintf(file_pointer, "Square of %d is %d", 3, 9);

  int result = fclose(file_pointer);
  if (result == 0) {
    file_pointer = NULL;
  } else {
    printf("\nFile was not closed properly.");
    return 1;
  }
  return 0;
}