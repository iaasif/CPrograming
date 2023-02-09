#include <stdio.h>
int main()
{
    int x=10, y;
    int *p, *q;


    p = &x;
   // q = &y;  this line need...or the program crashed
    y=*p;
    *p=15;
    *q=15;

    printf("value of x: %d\n", x);
    printf("value of y: %d\n", y);
    printf("value of *p: %d\n", *p);
    printf("value of *q: %d\n", *q);

    return 0;
}
