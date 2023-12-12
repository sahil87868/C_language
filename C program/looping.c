#include <stdio.h>

// 1. WAP to print 972 to 897 using for loop
void printNumbersDescending() {
    for (int i = 972; i >= 897; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

// 2. WAP to take 10 no. Input from user and find out …
// 3. How many Even numbers are there
// 4. How many odd numbers are there
// 5. Sum of even numbers
// 6. Sum of odd numbers
void analyzeNumbers() {
    int num, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
            evenSum += num;
        } else {
            oddCount++;
            oddSum += num;
        }
    }

    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);
}

// 7. WAP to print table up to given numbers
void printTable(int n) {
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// 8. WAP to print factorial of given number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// 9. WAP to print Fibonacci series up to given numbers
void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d, ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

// 10. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
void reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", reversed);
}

int main() {
    // Example usage
    printNumbersDescending();
    analyzeNumbers();
    printTable(5);
    printf("Factorial of 5: %d\n", factorial(5));
    fibonacci(8);
    reverseNumber(64728);

    return 0;
}
