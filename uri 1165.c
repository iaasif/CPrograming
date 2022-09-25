//not solved

#include<stdio.h>
int main()
{
    int i, num,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&num);
        if(num/1 == num && num%num == 1 )
        {
            printf("%d eh primo\n",num);
        }
        else
        {
            printf("%d nao eh primo\n",num);
        }
    }
}
