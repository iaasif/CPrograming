#include <stdio.h>
int main()

{

    int x = 100;
    int *ptr = NULL;

    printf("value of x: %d\n", x);

    ptr = &x;
    printf("value of p: %d\n", *ptr);

    return 0;
}

