#include <stdio.h>
#include <stdlib.h>
void count_chars(FILE *file, int *counts) {
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        switch (ch) {
            case ' ': counts[1]++; break;
            case '\t': counts[2]++; break;
            case '\n': counts[3]++; break;
            default: counts[0]++; break;
        }
    }
}
int main(int argc, char *argv[]) {
    FILE *file;
    int counts[4] = {0, 0, 0, 0};
    if (argc != 2) {
        printf("Usage: %s filename\n", argv[0]);
        exit(1);
    }
    file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Error: Can't open the file '%s'\n", argv[1]);
        exit(1);
    }
    count_chars(file, counts);
    fclose(file);
    printf("Chars: %d\n", counts[0]);
    printf("Spaces: %d\n", counts[1]);
    printf("Tabs: %d\n", counts[2]);
    printf("New lines: %d\n", counts[3]);
    return 0;
}