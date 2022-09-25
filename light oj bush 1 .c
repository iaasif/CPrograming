//https://lightoj.com/problem/brush-1
#include<stdio.h>
int main()
{
    int i, j,t,t2, sum,num;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&t2);
        sum=0;
        for(j=1; j<=t2; j++)
        {
            scanf("%d",&num);
            if(num>0)
            {
                sum = sum+num;
            }

        }

        printf("Case %d: %d\n",i, sum);

    }
    return 0;
}
