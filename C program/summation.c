#include <stdio.h>

int calculateSummation(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int summation = calculateSummation(number);

    printf("Summation of digits: %d\n", summation);

    return 0;
}
