#include <stdio.h>
char *one[] = { "", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "
              };
char *ten[] = { "", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "
              };
void convert_to_words(char *num) {
    int len = strlen(num);
    if (len == 0) {
        fprintf(stderr, "empty string\n");
        return;
    }
    if (len > 4) {
        fprintf(stderr, "Length more than 4 is not supported\n");
        return;
    }
    char *str[] = { "", "thousand ", "hundred ", ""};
    int j = 0;
    while (*num) {
        if (*num - '0' != 0) {
            printf("%s", one[*num - '0']);
            printf("%s", str[j]);
        } else {
            printf("%s", ten[*(num + 1) - '0']);
            ++num;
            printf("%s", one[*num - '0']);
        }
        ++num;
        --j;
    }
}
void main() {
    char numToConvert[5];
    printf("Enter a number up to 9999: ");
    scanf("%s", numToConvert);
    convert_to_words(numToConvert);
}