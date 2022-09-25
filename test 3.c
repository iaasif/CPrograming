#include<stdio.h>
int main()
{

    int i, j, k;

    int t, n1, n2, n3,temp;
    {
        scanf("%d %d",&n1,&n2);

        if(n1<n2)
        {
            temp=n1;
            n1=n2;
            n2=temp;

        }
        printf("%d is large",n1);
    }

}
