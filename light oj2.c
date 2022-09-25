#include<stdio.h>
int main()
{
    int i, n=0, t, a, b ;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        if(n>=10)
        {
            //scanf("%n",&n);
            printf("10 %d\n",n-10);
        }
        else
        {
            printf("0 %d\n",n);

        }
    }
    return 0;
}
