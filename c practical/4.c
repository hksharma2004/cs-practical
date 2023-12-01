#include <stdio.h>

int main() {
    int a = 5, b = 3;

    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT for a: %d\n", ~a);
    printf("Left shift: %d\n", a << 1);
    printf("Right shift: %d\n", a >> 1);

    return 0;
}