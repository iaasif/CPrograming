#include<stdio.h>
int main()
{
    int i , j , n , t,row,col;

    scanf("%d",&t);
    for(row=1;row<=t;row++)
    {
        for(col=1;col<=t-row;col++)
            printf(" ");
        for(col=1;col<=2*row-1;col++)
            printf("*");
        printf("\n");
    }

}
