#include<stdio.h>
int main()
{
    int hight , requeirHight,t ;

    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&hight,&requeirHight);
        if(hight>=requeirHight)
        {
            printf("YES\n");
        }
        else printf("NO\n");

    }


return 0;
}
