#include <stdio.h>

int main() {
    char str[100];
    int i, j, found;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates: ");

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        found = 0;

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("%c", str[i]);
        }
    }

    return 0;
}