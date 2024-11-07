#include <stdio.h>

int main() {
    unsigned int number;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &number);
    printf("Decimal    : %5d\n", number);
    printf("Octal      : %5o\n", number);
    printf("Hexadecimal: %5X\n", number);

    return 0;
}