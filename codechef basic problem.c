#include<stdio.h>
int main()
{
    int a,b,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a ,&b);
        printf("%d\n",a+b);
    }

    return 0;

}
