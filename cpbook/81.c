#include <stdio.h>
int main()
{
    int ara[]= {1,2,3,4,5};
    int low_index=0;
    int high_index=4;
    int mid_index;
    int num=2;
    while(low_index<=high_index)
    {
        mid_index=(low_index+high_index)/2;
        if(num==ara[mid_index])
        {
            break;

        }
        if(num<ara[mid_index])
        {
            high_index=mid_index-1;

        }
        else
        {
            low_index=mid_index+1;

        }
    }
    if(low_index>high_index)
    {
        printf("%d is not in this array\n",num);
    }
    else
    {
        printf("%d is found in the array. It is the %d th element of the array.\n", num, mid_index+1);
    }
}



