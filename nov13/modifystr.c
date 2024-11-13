#include <stdio.h>
void String(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (len % 2 == 0) {
        str[len - 1] = '1';
    } else {
        str[len - 1] = '0';
    }
    printf("Modified String: %s\n", str);
}
int main() {
    char input[] = "HelloWorld";
    String(input);
    return 0;
}