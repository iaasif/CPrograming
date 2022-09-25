#include<stdio.h>
int main()
{
    int i, x, count=1;

    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        printf("%d\n",count*i);
        count=count*10+1;

    }

return 0;}
