#include<stdio.h>
int main()
{
    int i, t, x, n, p, pos, neg, sum ;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&x,&p);

        int wrong;
        wrong = n-x;

        pos= (x*3);
        neg = ((wrong)*(1));
        //ekhane -1 dile kaj kore nah , -1 na dia +1 hoile kaj kore , -1 hoy nai kn ??

        sum = pos-neg;
        if(sum>=p)
        {
            printf("pass");
        }
        else
        {
            printf("fail");
        }

    }
    return 0;
}
