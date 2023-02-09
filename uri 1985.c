//not solved

#include<stdio.h>
int main()
{
    int t,i;
    double v;
    int p,sum=0;
    //p2=1002,p3=1003,p4=1004,p5=1005;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",p);
        switch(p)
        {

        case 1001:
            scanf("%d",v);
            sum=1.5*v;
            break;
        case 1002:
            scanf("%d",v);
            sum=2.5*v;
            break;

        case 1003:
            scanf("%d",v);
            sum=3.5*v;
            break;

        case 1004:
            scanf("%d",v);
            sum=4.5*v;
            break;
        case 1005:
            scanf("%d",v);
            sum=5.5*v;
            break;
        }


    }

    printf("%d",sum);
    return 0;
}
