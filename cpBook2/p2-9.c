#include <stdio.h>
int main()

{

    int x = 100;
    int *ptr = NULL;

    printf("value of x: %d\n", x);
    printf("value of p: %d\n", *ptr); // because p is null , print cant be done
}
