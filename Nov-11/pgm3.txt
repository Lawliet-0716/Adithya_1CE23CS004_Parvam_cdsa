#include<stdio.h>
int main (){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2==0){
        printf("It is a even number ");
    }else {
        printf("It is a odd number ");
    }
    return 0;
}