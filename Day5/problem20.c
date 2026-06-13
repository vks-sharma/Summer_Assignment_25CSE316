#include <stdio.h>

int main() {
    int num, i, j, isPrime, largest = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            isPrime = 1;

            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if (isPrime) {
                largest = i;
            }
        }
    }

    printf("Largest Prime Factor = %d\n", largest);

    return 0;
}