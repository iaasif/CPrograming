#include<stdio.h>
int main()
{
    int a=10;
    int b=5;

    printf("%d %d\n",a,b);


    if(a!=a)
    {

        a=a+b ;// 15
        b=a-b ;// 10
        a=a-b ;// 15-10 =5
        printf("%d %d\n",a,b);


    }
}
