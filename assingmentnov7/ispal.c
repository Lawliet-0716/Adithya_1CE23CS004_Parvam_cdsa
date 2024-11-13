#include <ctype.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char *s) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;
        if (tolower(s[left]) != tolower(s[right])) return false;
        left++;
        right--;
    }
    return true;
}

#include <stdio.h>

int main() {
    printf("%d\n", isPalindrome("A man, a plan, a canal: Panama"));
    printf("%d\n", isPalindrome("race a car"));
    printf("%d\n", isPalindrome(" "));
    return 0;
}