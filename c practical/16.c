#include <stdio.h>

// Call by Value
void incrementByValue(int num) {
    num++;
    printf("Inside function (Call by Value): %d\n", num);
}

// Call by Reference
void incrementByReference(int *num) {
    (*num)++;
    printf("Inside function (Call by Reference): %d\n", *num);
}

int main() {
    int num = 5;

    incrementByValue(num);
    printf("Outside function (Call by Value): %d\n", num);

    incrementByReference(&num);
    printf("Outside function (Call by Reference): %d\n", num);

    return 0;
}