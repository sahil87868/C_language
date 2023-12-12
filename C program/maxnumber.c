#include <stdio.h>

int findMaxDigit(int num) {
    int maxDigit = num % 10;
    num /= 10;

    while (num > 0) {
        int digit = num % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num /= 10;
    }

    return maxDigit;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int maxDigit = findMaxDigit(number);

    printf("Max digit: %d\n", maxDigit);

    return 0;
}
