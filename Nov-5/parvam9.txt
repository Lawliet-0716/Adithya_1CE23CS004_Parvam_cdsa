#include <stdio.h>

int main() {
    int i,n,sum;
    printf("enter the num value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++) {
        sum=sum+i*i;
    }
    printf("addition fo all num is :%d",sum);
    return 0;
}