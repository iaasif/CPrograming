#include<stdio.h>
int main()
{
    int x,y,z,i, t,sum=0;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d", &x, &y,&z);
        //sum=0;
        if(x+y+z>=2)
        {
            sum = sum +1;
        }
    }
    printf("%d",sum);
    return 0 ;
}
