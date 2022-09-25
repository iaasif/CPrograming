#include<stdio.h>
int main()
{
    long long int  i,t,j;
    long long int fact = 1,num;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%lld",&num);
        for(j = 2; j<=num; j++)
        {

            fact=fact*j;

        }
        printf("%lld\n",fact);
        fact= 1 ;

    }
return 0 ;}
