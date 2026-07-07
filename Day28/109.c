#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct Book books[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Title: ");
        scanf("%s", books[i].title);

        printf("Author: ");
        scanf("%s", books[i].author);
    }

    printf("\n----- Library Records -----\n");

    for (i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID : %d\n", books[i].id);
        printf("Title   : %s\n", books[i].title);
        printf("Author  : %s\n", books[i].author);
    }

    return 0;
}