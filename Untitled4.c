#include <stdio.h>
int main() {
    int i;
    float arr[5];
    for(i=0; i<5; i++)
        scanf("%f",&arr[i]);
    for(i=0; i<5; i++)
    {
        if(arr[i]<= 10.0)
            printf("A[%d] = %.1f\n",i,arr[i]);
    }
     return 0;
}
