#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    printf("=== Case 1: char *str = \"abcd\" ===\n");
    char *p = "abcd";
    printf("p points to: %s\n", p);

    printf("Modification NOT allowed on string literal\n\n");


    printf("=== Case 2: char str[] = \"abcd\" ===\n");
    char a[] = "abcd";

    printf("Before: %s\n", a);
    a[0] = 'A';   // ✅ allowed
    printf("After : %s\n\n", a);


    printf("=== Case 3: Pointer pointing to array ===\n");
    char b[] = "abcd";
    char *q = b;   // pointer to modifiable array

    q[1] = 'B';    // ✅ allowed
    printf("b = %s\n\n", b);


    printf("=== Case 4: strdup (heap allocation) ===\n");
    char *h = strdup("abcd");   // heap copy

    if (h == NULL) {
        perror("strdup failed");
        return 1;
    }

    h[2] = 'C';   // allowed
    printf("h = %s\n", h);
    free(h);      //MUST free
    printf("\n");


    printf("=== Case 5: sizeof differences ===\n");
    char arr[] = "abcd";
    char *ptr = "abcd";

    printf("sizeof(arr) = %lu\n", sizeof(arr)); // 5 (a b c d \0)
    printf("sizeof(ptr) = %lu\n", sizeof(ptr)); // pointer size (8 on 64-bit)\n\n");


    printf("=== Case 6: Passing to function ===\n");
    printf("strlen(arr) = %lu\n", strlen(arr));
    printf("strlen(ptr) = %lu\n", strlen(ptr));

    return 0;
}