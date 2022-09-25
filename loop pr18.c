#include<stdio.h>
int main()
{
    int i, j, row, col, n ;
    scanf("%d",&n);
    for(row=1; row<=n; row++)
    {
        for(col=n; col>=row; col--)
        {
            printf("*");
        }
        printf("\n");
    }


    // another solution


    int i2, j2,  t;
    scanf("%d",&t);
    for(i2=1; i2<=t; i2++)
    {
        for (j2=i2; j2<=t; j2++)
        {
            printf("*");
        }
        printf("\n");
    }
}
