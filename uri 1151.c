//uri 1151 solved
#include<stdio.h>
/* first approch
int main()
{
    int t;
    int i;
    scanf("%d",&t);
    int a[t];
    a[0]=0;
    a[1]=1;

    for(i=2; i<t; i++)
    {
        a[i]=a[i-1]+a[i-2];

    }
    for(i=0; i<t; i++)
    {
        if(i-1==t)
        {
            printf("%d",a[i]);
        }
        else
        printf("%d ",a[i]);
    }

    return 0;
}
*/


int main()
{
    int t;
    int i;
    scanf("%d",&t);
    int a[t];
    a[0]=0;
    a[1]=1;

    for(i=2; i<t; i++)
    {
        a[i]=a[i-1]+a[i-2];

    }
    printf("0");
    for(i=1; i<t; i++)
    {
        printf(" %d",a[i]);

    }
    printf("\n");
    return 0;
}

