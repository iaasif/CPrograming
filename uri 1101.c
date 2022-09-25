//solved uri 1101

#include<stdio.h>
int main()
{

    int i,start,end,temp,sum=0;
    // int arr[]={};
    int j=1;
    while(j>0)
    {

        scanf("%d %d",&start, &end);
        if(start<=0 || end<=0)
        {
            return 0 ;
        }
        if (start>end)
        {
            temp=start ;
            start = end;
            end=temp;
        }
        for(i=start; i<=end; i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
        sum=0;
        j++;
    }
    return 0;
}
