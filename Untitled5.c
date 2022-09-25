#include<stdio.h>
int main()
{
    int in,sum=1,i;
    scanf("%d",&in);
    for(i=in; i>=1; i--)
    {

        sum=sum*i;


    }
    printf("%d\n",sum);
    return 0;
}

