#include<stdio.h>
int main()
{
    int t, max=0, store=0, num,i;
//   scanf("%d",&t);


    for( i =1; i<=100; i++)
    {
        scanf("%d",&num);
        if(num>max)
        {
            max=num;
            store=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",store);

    return 0;
}
