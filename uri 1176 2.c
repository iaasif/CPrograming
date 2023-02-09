#include <stdio.h>
int main()
{
    int var ;
    scanf("%d",&var);
    int arr[var];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=var;i++){
        arr[i]=arr[i-1]+arr[i];
    }
}
