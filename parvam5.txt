#include <stdio.h>

int main() {
    int val;
    printf("Enter the val: ");
    scanf("%d", &val);

    while (val >= 0 && val <= 1000) {
        printf("Enter the value: ");
        scanf("%d", &val);
        if (val > 10 && val < 20 && val % 2 == 0) {
            printf("Valid\n");
        } else {
            printf("Invalid\n");
        }
    }

    return 0;
}