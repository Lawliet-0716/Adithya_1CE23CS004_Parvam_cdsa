#include <stdbool.h>
#include <string.h>

bool isSubsequence(char *s, char *t) {
    int i = 0, j = 0;
    while (s[i] && t[j]) {
        if (s[i] == t[j]) i++;
        j++;
    }
    return s[i] == '\0';
}

#include <stdio.h>

int main() {
    printf("%d\n", isSubsequence("abc", "ahbgdc")); // Output: 1 (true)
    printf("%d\n", isSubsequence("axc", "ahbgdc")); // Output: 0 (false)
    return 0;
}