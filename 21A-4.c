#include <stdio.h>
void append_file(const char *src, const char *dest) {
    FILE *source = fopen(src, "r");
    FILE *destination = fopen(dest, "a");
    if (source == NULL || destination == NULL) {
        fprintf(stderr, "Unable to open the files\n");
        return;
    }
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    fclose(source);
    fclose(destination);
}
int main() {
    const char *src = "file1.txt";
    const char *dest = "file2.txt";
    append_file(src, dest);
    return 0;
}