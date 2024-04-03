#include <stdio.h>

int main() {
    FILE *filePointer = fopen("kgcoding.txt", "a");
    if (filePointer == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Append text to the file
    fprintf(filePointer, "Appending a new line.\n");
    fprintf(filePointer, "The sum of %d and %d is %d.\n", 3, 7, 3+7);

    fclose(filePointer);
    return 0;
}

