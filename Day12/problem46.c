#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, remainder, digits = 0;
    int sum = 0;

    
    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = n;

   
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    return (sum == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}