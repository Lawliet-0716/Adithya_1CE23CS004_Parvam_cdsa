
#include <stdio.h>

int main() {
    int i,n,fact;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("factors of %d are:",n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
   