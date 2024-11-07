#include<stdio.h>
int main(){
    float flt;
    int itg;
    printf("Enter the float:");
    scanf("%f",&flt);
    itg = (int)flt;
    printf("Converted float to integer :%d \n ",itg);
}