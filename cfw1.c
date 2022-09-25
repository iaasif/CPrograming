#include<stdio.h>
int main(){
    int num1 , num2;
    int sum , dif, pro , quo, mod ;

    scanf("&num1,&num2");
    sum = num1+num2 ;
    dif = num1-num2;
    pro = num1*num2;
    quo = num1/num2;
    mod = num1%num2;
    printf("Sum = %d/n ,
            "Difference = %d/n "
            "Product = %d /n Quotient = %d /n Modulus = %d /n",sum ,dif , pro,quo,mod );

}
