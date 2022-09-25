#include <stdio.h>
int main()
{
    int pos,neg,odd,even,t,i;
    int num;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&num);

        if(num==0) printf("EVEN NULL\n");


        else
        {
            if(num%2==0)
            {
                if(num<0) printf("EVEN NEGATIVE\n");
                else printf("EVEN POSITIVE\n");
            }




            else
            {
                if(num<0) printf("ODD NEGATIVE\n");
                else printf ("ODD NEGATIVE\n");
            }
        }
    }
return 0;
}
