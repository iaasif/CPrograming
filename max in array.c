//find max and min number in a array
#include <stdio.h>
int main()
{

    int arr[]={10, 5, 12, 16, 2};
    int max=0,min=arr[0];
    for(int i=0;i<=4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min) min=arr[i];
    }


    printf("max is %d min is %d",max,min);
}
