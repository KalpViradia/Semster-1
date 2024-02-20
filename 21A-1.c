#include <stdio.h>
int main() {
    FILE *file;
    file = fopen("myfile.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fclose(file);
    return 0;
}