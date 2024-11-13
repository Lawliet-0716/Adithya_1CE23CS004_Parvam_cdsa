#include<stdio.h>
int main(){
int arr[5] = {0,1,2,3,4},num[5],j;
printf("The reversed array is :");
for(int i=1;i<=5;i++){ 
    num[i]=arr[5-i];
    printf("%d ",num[i]);
}
return 0;
}