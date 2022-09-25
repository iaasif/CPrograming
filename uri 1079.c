#include <stdio.h>

int main()
{
    float w1,w2,w3,w;
    int i, t;


        scanf("%d",&t);//cin>>t;
    while(t--)
    {
        scanf("%d, %d, %d",&w1, &w2, &w3);

        w=((w1+w2+w3)/3);
        printf("%f\n",w);
    }
}
