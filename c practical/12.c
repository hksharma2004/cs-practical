#include <stdio.h>

int main() {
    int i, j;

    // Pattern 1
    for (i = 1; i <= 5; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    // Pattern 2
    for (i = 5; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}