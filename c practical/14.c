#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 5, num2 = 7;

    printf("Sum: %d\n", add(num1, num2));
    printf("Maximum: %d\n", max(num1, num2));

    return 0;
}