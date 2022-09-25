#include<stdio.h>
int main()
{
    int i,j,test,num;
    int sum,dust;

    scanf("%d",&test);

    for(i=1; i<=test; i++)
    {
        scanf("%d",&num);
        sum=0;
        for(j=1; j<=num; j++)
        {
            scanf("%d",&dust);
            if(dust>0)
            {
                sum=sum+dust;
            }

        }
        printf("Case %d: %d\n",i,sum);

    }
    return 0;
}
