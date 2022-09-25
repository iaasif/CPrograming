#include<stdio.h>


void fun(int x, int y)
{
    //return x+y;

    printf("%d",x+y);

}



int main()
{
    int x, y,z ;
    scanf("%d %d",&x,&y);

//    printf("%d",fun(x,y));
fun(x,y);

    return 0;
}


