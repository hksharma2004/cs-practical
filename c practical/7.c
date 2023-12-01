#include <stdio.h>

int main() {
    int integerNumber = 10;
    float floatNumber = 5.5;
    char character = 'A';

    // Implicit type conversion
    float result = integerNumber + floatNumber;
    printf("Result after implicit conversion: %f\n", result);

    // Explicit type conversion
    int convertedResult = (int)floatNumber;
    printf("Result after explicit conversion: %d\n", convertedResult);

    // Type conversion with characters
    int charToAscii = (int)character;
    printf("ASCII value of %c is %d\n", character, charToAscii);

    return 0;
}