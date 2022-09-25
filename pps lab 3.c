#include<stdio.h>
int main()
{
    int i, var[3],small,medium,large ;
    for(i=0; i<=2; i++)
    {
        scanf("%d",&var[i]);

    }
    // printf("%d %d %d ",var[0],var[1],var[2]);
    if ( var[0] == var[1] || var[0]==var[2] || var[2]==var[1] )
    {
        printf("please enter three different value , can't have same value in two inpu");
        return 0;

    }
    else
    {
        if(var[0]<var[1] && var[0]<var[2])
        {
            small = var[0];
            if(var[1]>var[0] && var[1]<var[2])
            {
                medium = var[1];
                large = var[2];
            }
            else
            {
                medium = var[2];
                large = var[1];
            }

        }


        //0 1 2

        //1 2 0
        else if(var[1]<var[0] && var[1]<var[2])
        {
            small=var[1];
            if(var[2]>var[1] && var[2]<var[0])
            {
                medium = var[2];
                large = var[0];
            }
            else
            {
                medium = var[0];
                large = var[2];
            }
        }

        //2 0 1
        else if(var[2]<var[0] && var[2]<var[1] )
        {
            small =var[2];
            if(var[0]>var[2] && var[0]<var[1])
            {
                medium = var[0];
                large = var[1];
            }
            else
            {
                medium = var[1];
                large = var[0];
            }
        }

        printf("%d %d %d\n",small,medium, large);
        for(i=0; i<3; i++)
        {
            printf("%d\n",var[i]);
        }
    }
    return 0;
}
