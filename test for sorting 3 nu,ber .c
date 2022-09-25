#include<stdio.h>
int main()
{
    int x,y,z,temp,num1,num2,num3;
    scanf("%d%d%d", &x,&y,&z);
    if(x>y)
    {
        if(x>z)
        {
            num1=x;
            //printf("%d is large",x);
            if(y>z)
            {
                num2=y;
                num3=z;
            }
            else
            {
                num2=z;
                num3=y;
            }
        }
    }
    else if (y>z)
    {

       num1 = y ;
       if(x>z)
       {
           num2=x;
           num3=z;
       }
       else
       {
           num2=z;
           num3=x;
       }
    }

    else
    {
        num1=z;
        if(x>y)
        {
            num2=x;
            num3=y;
        }
        else{
            num2=y;
            num3=x;
        }
    }
printf("%d %d %d",num1 ,num2 , num3);

    return 0;
}


//

