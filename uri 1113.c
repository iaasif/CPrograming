//solved
#include<stdio.h>
int main()
{
    int i, j=10, large,small,temp;
    while(j>1)
    {
        scanf("%d %d",&small,&large);
        if(large==small)
        {
            return 0;
        }
        if(small<large)
        {
            printf("Crescente\n");
        }
        else
        {
            printf("Decrescente\n");
        }
    }
    return 0;
}
