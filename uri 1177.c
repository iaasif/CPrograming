#include<stdio.h>
int main()
{
    int j,a[1000];
    int n,num=0;
    scanf("%d",&n);
    for(j=0; j<1000; j++)
    {
        printf("N[%d] = %d\n",j,num);
        num++;
        if(num==n)
        {
            num=0;
        }
    }
    return 0;
}
