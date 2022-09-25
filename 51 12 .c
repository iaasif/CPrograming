//solved

#include<stdio.h>
int main()
{
    long long int  i,t,j ,k ;
    long long int fact = 1,num;

    //
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%lld",&num);
        for(j = 2; j<=num; j++)
        {

            fact=fact*j;

        }

        printf("%lld\n",fact);



        long long int count=0 , store ;
        while(fact>0)
        {
            store=fact%10;
            if(store==0)
            {
                count=count+1;
            }
            else break;
            fact=fact/10;

        }
        printf("%lld\n",count);
        fact = 1 ;

    }
return 0 ;}

