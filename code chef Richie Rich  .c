#include <stdio.h>
int main()
{
    long int result;

    long int i,t,a,x,b;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%ld %ld %ld", &a, &b, &x);
        result=((b-a)/x);
        printf("%ld\n",result);

    }
    return 0 ;
}
