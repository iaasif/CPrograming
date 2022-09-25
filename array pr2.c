#include<stdio.h>
int main()
{
    int arr[5]= {23,24,25,26,27};
    int arr2[5];
    for(int i = 0; i<=4; i++)
    {
        arr2[i]=arr[i];

    }

    for(int j = 0; j<=4; j++)
    {
        printf("%d\n",arr2[j]);
    }
}
