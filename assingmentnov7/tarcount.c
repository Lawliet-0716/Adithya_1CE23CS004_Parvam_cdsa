#include <stdio.h>

int main() {
    int n, target, count = 0;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);
    
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        if (*ptr == target) count++;
        ptr++;
    }
    
    printf("%d\n", count);
    return 0;
}