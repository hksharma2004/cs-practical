#include <stdio.h>

int main() {
    int num = 10;

    // if statement
    if (num > 0)
        printf("%d is a positive number.\n", num);

    // if-else statement
    if (num % 2 == 0)
        printf("%d is an even number.\n", num);
    else
        printf("%d is an odd number.\n", num);

    // elseif ladder
    if (num < 0)
        printf("%d is a negative number.\n");
    else if (num == 0)
        printf("%d is zero.\n");
    else
        printf("%d is a positive number.\n");

    return 0;
}