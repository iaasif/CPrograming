#include<stdio.h>
int main()
{

    int t, i, n, j, temp
    ;
    scanf("%d",&t);
    if(t<=10)
    {
        for(i=1 ; i <=t; i++)
        {
            scanf("%d",&n);
            printf("Case %d:", i);
            for(j=1; j<=n; j++)
            {
                if (n%j == 0)
                {
                    printf(" %d", j);
                }

            }

        }
    }
return 0;
}
