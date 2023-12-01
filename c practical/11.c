#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; ++i) {
        if (i == 5) {
            printf("Breaking the loop at i = 5.\n");
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}