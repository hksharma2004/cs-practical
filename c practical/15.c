#include <stdio.h>

// Function with auto storage class
void autoExample() {
    auto int localVar = 10;
    printf("Auto variable inside function: %d\n", localVar);
}

// Function with static storage class
void staticExample() {
    static int staticVar = 5;
    printf("Static variable inside function: %d\n", staticVar);
    staticVar++;
}

int main() {
    autoExample();
    autoExample();

    staticExample();
    staticExample();

    return 0;
}