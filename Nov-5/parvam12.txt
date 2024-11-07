#include <stdio.h>
int neon(int num) {
    int sq;
    int sum=0;
    sq=num*num;
    while(sq!=0){
        sum+=sq%10;
        sq/=10;
    }
    return sum==num;
}
int main() {
    int num;
    printf("enter the num value:");
    scanf("%d",&num);
    if(neon(num)) {
        printf("it is a neon number %d",num);
    }
    else {
        printf("it not is a neon number %d",num);
    }
    return 0;
}