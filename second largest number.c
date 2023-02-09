//second largest number in c

#include <stdio.h>
int main()
{

    int arr[]={10, 5, 12, 16, 22};
    int max=0,max2=arr[0];
    for(int i=0;i<=4;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        printf("max is %d\t max2 is %d\n",max,max2);
        }
    }
}

