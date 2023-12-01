#include <stdio.h>

int main() {
    // Declare variables to store the numbers
    int num1, num2, sum;

    // Input the first number
    printf("Enter the first number: ");
    scanf("%d", &num1);

    // Input the second number
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Add the numbers
    sum = num1 + num2;

    // Display the result
    printf("Sum: %d\n", sum);

    return 0;
}