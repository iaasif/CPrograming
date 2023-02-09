#include<stdio.h>


struct a
{
        int x;
        char ch;
        float f;
};


int main(){
    struct a temp ;
    temp.x=10;
    temp.ch='g';
    temp.f=10.20;


    printf(" %c",temp.ch);
}
