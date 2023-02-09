//binary search tree

#include<stdio.h>
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int low=0;
    int high=18;
    int n=2;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        // printf("mid value -> %d arr high value is %d\n",mid,arr[high]);
        if(n==arr[mid])
        {
            break;
        }
        if(n<arr[mid])
        {
            //  printf("mid value is %d\n arr left value is %d\n",mid,arr[0]);
            high=mid-1;
        }
        else
        {
            //printf("mid value is %d\n",mid);
            low=mid+1;
        }
    }
    if(low>high)
    {
        printf("number not found in this arr\n");
    }
    else
    {
        printf("%d is in %d th element\n",n,mid+1);
    }
}
