#include<stdio.h>
int main()
{
    int i, j, row, col, t;
    scanf("%d",&t);

    for(row=1; row<=t; row++)
    {

        for(col=1; col<=row; col++)
        {
            printf("*");
        }
        printf("\n");

    }



}
