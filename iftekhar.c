#include <stdio.h>
int main(){

    printf("enter how many letter on your name ?\n");
    int x ;
    scanf("%d",&x);
    char a[x];



    scanf("enter somethig",char a[x]);

    char a,s,i,f;
    a='a';
    s='s';
    i='i';
    f='f';
    printf("%c%c%c%c\n",a,s,i,f);

    a='a'+10;
    s='s'+10;
    i='i'+10;
    f='f'+10;
    if(a>122) a=122;
    if(s>122) s=122;
    if(i>122) i=122;
    if(f>122) f=122;

    printf("%c%c%c%c",a,s,i,f);

    return 0;
}
