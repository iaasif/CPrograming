#include <stdio.h>
int main()
{
    int a,i,ans;
    scanf("%d",&a);
    for(i=a; i<=a; i--)
    {   if(i==0) break;
        if(a%i == 0)
        {
            ans=a/i;
            printf("%d %d\n",ans,i);
        }

    }

}
