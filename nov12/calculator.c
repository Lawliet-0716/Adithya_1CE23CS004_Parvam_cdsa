#include<stdio.h>
int main(){
    char ch;
    float num1,num2,result;
    printf("enter the two operands:");
    scanf("%f %f",&num1,&num2);

    printf("MENU :\n a.add\nm.multiply \nd.divide\ns.subtract\n");
    printf("Enter the choice:");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a' : 
        case 'A' :
        printf("you have choosed addition");
        result=num1+num2;
        break;
        case 'm' : 
        case 'M' :
        printf("you have choosed multiplication");
        result=num1*num2;
        break;
        case 'd' : 
        case 'D' :
        printf("you have choosed divition");
        result=num1/num2;
        break;
        case 's' : 
        case 'S' :
        printf("you have choosed subtraction");
        result=num1-num2;
        break;
        default :
        printf("invalid choice");
    }
    printf("Result is :%f",result);
    return 0;
}