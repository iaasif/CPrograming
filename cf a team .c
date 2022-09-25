//wrong output


#include<stdio.h>
int main()
{
    int x=0, i, j, k, y, sum=0;
    int t, num;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        // printf(" loop no : %d\n",i);
        for(j=1; j<=3; j++)
        {
            scanf("%d",&num);
            sum = sum+num;
            //printf("%d\n",sum);

        }
        if(sum>=2)
            {
                x=0;
                x=x+1;
                printf("%d\n",x);
            }
        sum=0;
        num=0;
    }
    return 0;
}
