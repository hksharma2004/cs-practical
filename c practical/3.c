#include <stdio.h>

int main() {
    int num = 5;

    num += 3; // num is now 8
    printf("After +=: %d\n", num);

    num -= 2; // num is now 6
    printf("After -=: %d\n", num);

    num *= 4; // num is now 24
    printf("After *=: %d\n", num);

    num /= 3; // num is now 8
    printf("After /=: %d\n", num);

    return 0;
}