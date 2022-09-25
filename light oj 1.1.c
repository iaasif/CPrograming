#include<stdio.h>
int main()
{
    int i, i2,n,a,b, sum=0;

    scanf("%d",&n);

    if(n<=125)
    {
        for (i=0; i<n; i++)
        {
            scanf("%d %d",&a, &b);
            sum=a+b;
            printf("Case %d: %d\n",i+1,sum);

        }


       /* for (i=1;i<n+1;i++)
        {
            printf("case %d: %d\n",i,sum[i-1]);
        }
    */
    }
return 0 ;

}

