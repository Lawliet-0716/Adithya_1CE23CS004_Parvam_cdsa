#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);

    if(ch>=97 && ch <=122){
        printf("it is a lower character");
    }else if(ch>=65 && ch<=90){
        printf("it is a upper character");
    }else if(ch>=48 && ch<=57){
        printf("it is a digit number");
    }
    else{
        printf("it is a speacial character");
    }
    return 0;
}