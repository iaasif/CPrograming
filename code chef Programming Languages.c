//not solved

#include<stdio.h>
int main()
{
    long long int t,a,b,a1,b1,a2,b2;
    //int ans=0;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld, %lld , %lld, %lld, %lld, %lld",&a, &b, &a1, &b1, &a2, &b2);
        int ans=0;
        if((a==a1 && b==b1) || (b==a1 && a==b1))
        {
            ans=1;
        }
        if ((a==a2 && b==b2) || (b==a2 && a==b2))
        {
            ans=2;
        }

        printf("%d\n",ans);
    }

    return 0;
}
