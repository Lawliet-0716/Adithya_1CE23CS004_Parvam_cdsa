#include<stdio.h>
int main(){
    int line;
    int  num;
    printf("Enter the number :");
    scanf("%d",&num);
    for(line=1;line<=5;line++){
        for(num=1;num<=line;num++){
            printf("%d ",num);
        }
        printf("\n");
    }

    
}