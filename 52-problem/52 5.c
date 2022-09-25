#include<stdio.h>
int main()
{
    int i, j, test, n,k;
    scanf("%d",&test);
    for (i=1; i<=test; i++)
    {
        scanf("%d",&n);
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
