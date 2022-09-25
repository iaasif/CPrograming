#include<stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,i;

    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
    if(n1>=1 && n1<=13 || n2>=1 && n2<=13 || n3>=1 && n3<=13 || n4>=1 && n4<=13 || n5>=1 && n5<=13  )
    {
        if(n1<n2)
        {
            if(n2<n3)
            {
                if(n3<n4)
                {
                    if(n4<n5)
                    {
                        printf("A\n");
                    }
                    else
                    {
                        printf("N\n");
                    }
                }
                else
                {
                    printf("N\n");
                }
            }
            else
            {
                printf("N\n");
            }

        }

        else if(n1>n2)
        {
            if(n2>n3)
            {
                if(n3>n4)
                {
                    if(n4>n5)
                    {
                        printf("D\n");
                    }
                    else
                    {
                        printf("N\n");
                    }


                }
                else
                {
                    printf("N\n");
                }
            }
            else
            {
                printf("N\n");
            }
        }
        else
        {
            printf("N\n");
        }

    }
    else{
        printf("number is large or small\n");
    }

    return 0;

}
