#include <stdio.h>
int main()
{

    char c = 'A';
    char *p, **q;

    p = &c;
    q = &p;

    printf("Value of c: %c\n", c);
    printf("Value of c: %c\n", *p);
    printf("Value of c: %c\n", **q);


    //for better understanding
    printf("address of c: %p\n", c);
    printf("address of *p: %p\n", *p);
    printf("address of **q: %p\n", **q);




}
