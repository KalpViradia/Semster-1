#include <stdio.h>
int main() {
    FILE *file;
    char ch;
    int n, count = 0;
    char string[100];
    file = fopen("file.txt", "w+");
    fprintf(file, "This is testing fprintf() function.\n");
    fseek(file, 0, SEEK_SET);
    while((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
        count++;
    }
    fseek(file, 0, SEEK_SET);
    for(n = 0; n < count; n++) {
        fputc(string[n], file);
    }
    fseek(file, 0, SEEK_SET);
    fscanf(file, "%s", string);
    printf("\n\nString read by fscanf(): %s\n", string);
    fprintf(file, "\nThis is testing rewind() function.\n");
    rewind(file);
    fscanf(file, "%s", string);
    printf("\n\nString read by fscanf() after rewind(): %s\n", string);
    fclose(file);
    return 0;
}