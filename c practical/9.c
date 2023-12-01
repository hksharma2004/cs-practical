#include <stdio.h>

int main() {
    long long binaryNum;
    int decimalNum = 0, remainder, base = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binaryNum);

    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * base;
        binaryNum /= 10;
        base *= 2;
    }

    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}