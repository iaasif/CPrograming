#include <stdio.h>
int main(){
    int x = 10;
    int *p;

    p = &x;
    printf("value of x: %d\n",x);

    *p=20;

    printf("value of x: %d\n",x);
    printf("address of x: %p\n",&x);
    printf("address of p: %p\n",p);



    //this is a extra line i added to understand more clearly
    printf("content  of p: %d\n",*p);
    return 0;

}
