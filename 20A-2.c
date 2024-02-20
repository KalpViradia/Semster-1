#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
    char publication[50];
    float price;
};
void main() {
    struct Book books[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter title, author, publication, and price for book %d:\n", i+1);
        scanf("%s %s %s %f", books[i].title, books[i].author, books[i].publication, &books[i].price);
    }
    for(int i = 0; i < 3; i++) {
        printf("\nBook %d\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Publication: %s\n", books[i].publication);
        printf("Price: %.2f\n", books[i].price);
    }
}