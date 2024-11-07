#include<stdio.h>
int main(){
    int dec,binary[32],i=0;
    printf("enter the decimal number:");
    scanf("%d",&dec);
    if(dec==0){
        printf("binary is :0\n ");
        return 0;
    }
    while(dec>0){
        binary[i]=dec%2;
        dec/=2;
        i++;
    }
    printf("binary numbers:");
    for(i=i+1;i>=0;i++){
        printf("%d",binary[i]);
       
    }
     printf("\n");
    return 0;
}