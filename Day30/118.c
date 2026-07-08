#include <stdio.h>

int main()
{
    int n, i;
    int bookId[100];
    char bookName[100][50];
    char author[100][50];

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &bookId[i]);

        printf("Book Name: ");
        scanf(" %[^\n]", bookName[i]);

        printf("Author Name: ");
        scanf(" %[^\n]", author[i]);
    }

    // Display book details
    printf("\n----- Library Records -----\n");
    printf("Book ID\tBook Name\t\tAuthor\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%-20s%-20s\n", bookId[i], bookName[i], author[i]);
    }

    return 0;
}