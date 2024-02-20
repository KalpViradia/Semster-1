#include <stdio.h>
int main() {
    FILE *sourceFile;
    FILE *destinationFile;
    char ch;
    sourceFile = fopen("source.txt", "r");
    if(sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }
    destinationFile = fopen("destination.txt", "w");
    if(destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    while((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }
    fclose(sourceFile);
    fclose(destinationFile);
    return 0;
}