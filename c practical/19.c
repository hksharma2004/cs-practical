#include <stdio.h>
#include <string.h>

int main() {
    // String declaration and initialization
    char greeting[] = "Hello, World!";

    // String length using strlen function
    printf("Length of the string: %lu\n", strlen(greeting));

    // String copy using strcpy function
    char copy[20];
    strcpy(copy, greeting);
    printf("Copied string: %s\n", copy);

    // String concatenation using strcat function
    char name[] = "John";
    strcat(copy, name);
    printf("Concatenated string: %s\n", copy);

    // String comparison using strcmp function
    char str1[] = "apple";
    char str2[] = "orange";
    int result = strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal.\n");
    else if (result < 0)
        printf("String 1 is less than String 2.\n");
    else
        printf("String 1 is greater than String 2.\n");

    return 0;
}