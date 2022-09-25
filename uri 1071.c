#include<stdio.h>
int main()
{
    int l,s,i,sum=0,t;
    scanf("%d %d",&l,&s);
    if(l<s)
    {
        t=l;
        l=s;
        s=t;
    }
    for(i=s+1; i<=l-1; i++)
    {
        if(i%2 != 0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
