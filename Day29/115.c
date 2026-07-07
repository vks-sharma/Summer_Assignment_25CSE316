#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100];
    int choice;

    printf("Enter a string: ");
    getchar();
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    do {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Concatenate Another String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2: {
                char temp[100];
                strcpy(temp, str);
                strrev(temp);
                printf("Reversed String: %s\n", temp);
                break;
            }

            case 3:
                for (int i = 0; str[i] != '\0'; i++) {
                    if (str[i] >= 'a' && str[i] <= 'z')
                        str[i] -= 32;
                }
                printf("Uppercase String: %s\n", str);
                break;

            case 4:
                printf("Enter another string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcat(str, str2);
                printf("Concatenated String: %s\n", str);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice.\n");
        }

    } while (choice != 5);

    return 0;
}