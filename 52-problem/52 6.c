#include<stdio.h>
int main()
{
    int num, test, i , j, frist=0, last=0 ,sum=0 ;
    scanf("%d",&test);
    for (i=1;i<=test;i++)
    {
        scanf("%d",&num);
        //12345
        frist = num / 10000;
        last = num % 10;
        sum = frist+last;
        printf("%d\n",sum);


    }
    return 0;
}
