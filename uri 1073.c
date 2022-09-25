#include <stdio.h>
//#include <math.h>

int main()
{
    int i, num, ans=0;
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        if(i%2==0)
        {
            ans=i*i;
            printf("%d^%d = %d\n",i,i,ans);

        }
    }
    return 0;
}
