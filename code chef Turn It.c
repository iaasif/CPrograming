#include <stdio.h>
int main()
{
    int t,v,a,s,u,i,ans;


    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&u, &v, &a, &s);
        a=a*-1;

        ans=(u*u)+2*a*s;

        if((v*v)>=ans) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
