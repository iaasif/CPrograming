#include <stdio.h>
int main()
{
   long long int a,b,i;
    scanf("%lld %lld",&a, &b);
   long long int sum=0;
//    for(i=a; i<=b; i++)
//    {
//        sum=sum+i;
//    }
    sum = (a+b)*(b-a+1)/2;
    printf("%lld\n",sum);

    return 0;
}
