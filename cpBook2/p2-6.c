#include <stdio.h>
int main()
{

    int x = 10;
    int y ;
    int *p;

    printf("value of x: %d\n",x);
    p=&x;

    y=*p;
    *p=15;

    printf("value of x: %d\n", x);
    printf("value of y: %d\n", y);
    printf("value of *p: %d\n",*p);

    printf("value of x: %p\n", &x);
    printf("value of y: %p\n", &y);
    printf("value of p: %p\n", p);



    return 0;
}
