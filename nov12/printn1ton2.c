#include<stdio.h>
int main (){
    int n1,n2,i;
    printf("Enter the number n1:");
    scanf("%d",&n1);
    printf("Enter the number n2:");
    scanf("%d",&n2);
    
        if(n1<=n2){
            for(;n1++<n2;){
            printf("%d\n",i);
            }
        }else{
            printf("invalid input");
            }
        
        
    return 0;
}
