//uri 1075 solved
#include<stdio.h>
int main()
{
    int arr1[20],i;

    for(i=19; i>=0; i--)
    {
        scanf("%d",&arr1[i]);
    }

    for(int k=0; k<20; k++)
    {
        printf("N[%d] = %d\n",k,arr1[k]);
    }
    return 0;
}
