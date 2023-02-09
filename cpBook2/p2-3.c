#include <stdio.h>
int main()
{
    double pi = 3.14159365358;
    int *ptr;
    ptr = &pi;

    printf("value of pi: %lf\n", pi);
    printf("value of pi: %lf\n", *ptr);

    return 0;
}
