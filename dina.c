#include<stdio.h>
int swap(a,b){

    a=a+b;
    b=a-b;
    a=a-b;

    return a,b;
}








int main(){
    int a = 10 ,b=2;
    scanf("%d %d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    sawp(a,b);
    printf("a=%d b=%d\n",a,b);





}
