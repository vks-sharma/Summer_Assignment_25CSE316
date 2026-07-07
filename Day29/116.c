#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n, i;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Item %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &items[i].id);

        printf("Item Name: ");
        scanf("%s", items[i].name);

        printf("Quantity: ");
        scanf("%d", &items[i].quantity);

        printf("Price: ");
        scanf("%f", &items[i].price);
    }

    printf("\n----- INVENTORY RECORDS -----\n");

    for (i = 0; i < n; i++) {
        printf("\nItem %d\n", i + 1);
        printf("ID       : %d\n", items[i].id);
        printf("Name     : %s\n", items[i].name);
        printf("Quantity : %d\n", items[i].quantity);
        printf("Price    : %.2f\n", items[i].price);
    }

    return 0;
}