//solved
#include<stdio.h>
int main()
{
    int i,start,t,finish,date;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&date,&start,&finish);
        if(date>=start )
        {
            if(date<=finish)
            {
                printf("Take second dose now\n");
            }
            else
                printf("Too Late\n");
        }
        else
        {
            printf("Too Early\n");
        }
    }
    return 0 ;
}
