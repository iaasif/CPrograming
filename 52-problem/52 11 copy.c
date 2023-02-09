//solved
#include <stdio.h>
int main()
{

    //int t, i ;
    long long int fact=1,j,n,t,i;

    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        for(j=2; j<=n; j++)
        {
            fact=fact*j;
        }
        printf("%lld\n",fact);
        fact=1;
    }


    return 0;
}
