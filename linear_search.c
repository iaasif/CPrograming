#include<stdio.h>
int main()
{

    int n =8 ,x=5;
    int a[8]={1,2,3,4,5,6,7,10};

    int linear_search()
    {
        int j;
        for(j=0;j<n;j++)
        {
            if (a[j]==10)
            {
                return j;
            }
        }
    j=-1;
    return j;
    }


    linear_search();
}
