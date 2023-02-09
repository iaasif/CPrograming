#include <stdio.h>
int main()
{
    int left=0, right,n, mid,arr[]= {1,2,3,4,5,6,7};
    right=6;
    n=7;
    //
    while(left<=right)
    {
        mid=(left+right)/2;
        if(n==arr[mid]) break;
        if(n<arr[mid]) right=mid-1;
        else left=mid+1;
    }
    if(left>right) printf("%d is not in this arr",n);
    else printf("%d is the in %dth element",n,mid+1);
}
