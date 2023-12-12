#include <stdio.h>

int sumFirstLastDigit(int num) {
    int lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }

    int firstDigit = num;

    return firstDigit + lastDigit;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumFirstLastDigit(number);

    printf("Sum of first and last digit: %d\n", result);

    return 0;
}
