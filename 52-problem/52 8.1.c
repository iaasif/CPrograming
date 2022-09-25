#include<stdio.h>
int main()
{
    int i, j,kase, n1,n2,n3,x,y,z;


    scanf("%d",&kase);
    for(i=1; i<=kase; i++)
    {
        scanf("%d %d %d",&x,&y,&z);

        if(x>y && x>z)
        {
            n1=x;
            if(y>z)
            {
                n2=y;
                n3=z;
            }
            else
            {
                n2=z;
                n3=y;
            }
        }


        else if(y>x && y>z)
        {
            n1=x;
            if(x>z)
            {
                n2=x;
                n3=z;
            }
            else
            {
                n2=z;
                n3=x;
            }



        }


        else if (z>x && z>y)
        {
            n1=z;
            if(x>y)
            {
                n2=x;
                n3=y;
            }
            else
            {
                n2=y;
                n3=x;
            }
        }

   printf("case %d %d %d %d\n",i, n3,n2,n1);
    }
return 0;
}
