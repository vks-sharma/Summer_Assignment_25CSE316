#include <stdio.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, max = 0, start = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            len++;
        } else {
            if (len > max) {
                max = len;
                start = i - len;
            }
            len = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    for (i = 0; i < max; i++) {
        longest[i] = str[start + i];
    }
    longest[max] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d", max);

    return 0;
}