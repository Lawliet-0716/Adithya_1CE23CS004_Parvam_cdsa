#include <stdio.h>

int main() {
    int num, revNum = 0, temp, i, isPrime = 1, isRevPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    temp = num;
    while (temp > 0) {
        revNum = revNum * 10 + temp % 10;
        temp /= 10;
    }

    if (revNum <= 1) {
        isRevPrime = 0;
    } else {
        for (i = 2; i * i <= revNum; i++) {
            if (revNum % i == 0) {
                isRevPrime = 0;
                break;
            }
        }
    }

    if (isPrime && isRevPrime && revNum != num) {
        printf("%d is an emirp number.\n", num);
    } else {
        printf("%d is not an emirp number.\n", num);
    }

    return 0;
}