#include <stdio.h>
int main()
{
    int row,col,n;

    n=4;

    for(row=1; row<=n; row++)
    {

        for(col=1; col<row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=n; col++)
        {
            printf("*");
        }
        printf("\n");
    }












    return 0;
}
