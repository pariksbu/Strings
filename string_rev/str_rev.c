#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

void reverseString(char *str) {
    int len = strlen(str);
    printf("Length of string: %d excluding null terminator %d\n", len, len - 1);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}