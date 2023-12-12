#include <stdio.h>

// Function to find the maximum digit in a number
int findMaxDigit(int num) {
    int maxDigit = num % 10;
    num /= 10;

    while (num > 0) {
        int digit = num % 10
