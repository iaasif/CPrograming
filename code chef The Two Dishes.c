//not solved
#include<stdio.h>
int main()
{
    int i,s,n,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&s);
        n=abs(n);
        s=abs(s);

        printf("%d\n",abs(s-n));
    }
}
