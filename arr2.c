//make all the odd number to 0 and print the array

#include<stdio.h>
int main()
{
    int arr[14] = {1,4,6,7,9,33,77,66,55,44,23,53,64,86};

    int i;
    for(i=0; i<14; i++)
    {
        if(arr[i]%2!=0)
        {
            arr[i]=0;

        }

    }

    for(i=0; i<14; i++)
    {
        printf("%d ",arr[i]);
    }


}

