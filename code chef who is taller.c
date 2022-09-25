#include<stdio.h>
int main()
{
    int i , x, y ,t;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x, &y);
        if(x>y)
        {
            printf("A\n",x);
        }
        else printf("B\n",x);
    }
    return 0;
}
