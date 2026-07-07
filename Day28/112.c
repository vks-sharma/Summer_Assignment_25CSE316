#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    int n, i;

    printf("Enter the number of contacts: ");
    scanf("%d", &n);

    struct Contact contacts[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Contact %d\n", i + 1);

        printf("Name: ");
        scanf("%s", contacts[i].name);

        printf("Phone Number: ");
        scanf("%s", contacts[i].phone);
    }

    printf("\n----- Contact List -----\n");

    for (i = 0; i < n; i++) {
        printf("\nContact %d\n", i + 1);
        printf("Name : %s\n", contacts[i].name);
        printf("Phone: %s\n", contacts[i].phone);
    }

    return 0;
}