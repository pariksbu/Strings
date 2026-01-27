#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(char *str);


int main() {
    char str[] = "madam";
    printf("Original string: %s\n", str);
    if (isPalindrome(str)) {
        printf("The string is a palindrome\n");
    } else {
        printf("The string is not a palindrome\n");
    }
    return 0;
}

int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        printf("Comparing %c [index %d] and %c [index %d]\n", str[i], i, str[len - i - 1], len - i - 1);
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}