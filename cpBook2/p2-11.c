#include <stdio.h>
int main()
{
    int *p = NULL;
    *p=100;

     printf("value of *p: %d\n", *p); //segmentation fault ; because p is not pointing any var

    return 0;
}
