#include<stdio.h>
int str_len(char s[]) {
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}
void str_cat(char s1[], char s2[]) {
    int len1 = str_len(s1);
    int len2 = str_len(s2);
    for(int i = 0; i <= len2; i++)
        s1[len1 + i] = s2[i];
}
int str_cmp(char s1[], char s2[]) {
    int i = 0;
    while(s1[i] == s2[i]) {
        if(s1[i] == '\0' || s2[i] == '\0')
            break;
        i++;
    }
    if(s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else
        return -1;
}
void main() {
    char str1[100], str2[100];
    int choice;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("\nMENU:\n");
    printf("1. Length of first string\n");
    printf("2. Concatenate strings\n");
    printf("3. Compare strings\n");
    printf("4. Exit\n");
    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Length of first string is %d\n", str_len(str1));
                break;
            case 2:
                str_cat(str1, str2);
                printf("Concatenated string is %s\n", str1);
                break;
            case 3:
                if(str_cmp(str1, str2) == 0)
                    printf("Strings are equal.\n");
                else
                    printf("Strings are not equal.\n");
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while(choice != 4);
}