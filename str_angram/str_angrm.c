#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isAnagram(char *str1, char *str2);


int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    if (isAnagram(str1, str2)) {
        printf("The strings are anagrams\n");
    } else {
        printf("The strings are not anagrams\n");
    }
    return 0;
}

int isAnagram(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2) {
        return 0;
    }
    
    int freq[26];
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < len1; i++) {
        freq[str1[i] - 'a']++;
    }
    for (int i = 0; i < len2; i++) {
        freq[str2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }
    return 1;
}