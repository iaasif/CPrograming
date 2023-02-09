#include <stdio.h>
int main()
{
    //printf("\n",);

    int i, n, j ;

    n=5;

    for(i=1; i<=n; i++)
    {

        for(j=1; j<=n; j++)
        {

            if(j>=n+1-i) printf("*");
            else printf(" ");

        }
        printf("\n");

    }

    return 0;
}
