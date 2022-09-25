#include<stdio.h>
int main()
{
    int arr[5]= {23,24,25,26,27};
    int arr2[5];
    for(int i = 0,j=4; i<=4,j>=0; i++,j--)
    {
        arr2[j] = arr[i];
    }

    for(int k = 0; k<=4; k++)
    {
        printf("%d\n",arr2[k]);
    }
}

