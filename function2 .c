#include<stdio.h>

int fahimAdder(int a,int b)
{
    //scanf("%d %d",&a,&b);
    int sum=a+b;
    return sum;
}

int main()
{
    int x,y;
    x=10;
    y=20;
    printf("%d %d\n",x,y);

    int sum1=fahimAdder(x,y);
    printf("%d",sum1);

}
