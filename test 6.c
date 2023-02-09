#include <stdio.h>
int main()
{
    int a ;
    while(1)
    {
        scanf("%d",&a);
        if(a!=0)
        {
            printf("%d\n",a);
        }
        else
        {
            printf("you put zero on a that why program is finished\n");
            break ;
        }
    }
    return 0;
}
