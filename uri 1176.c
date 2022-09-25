//unsolved
#include<stdio.h>
int main (){
    int num , arr[5],i,j,t;
    arr[0]=0;
    arr[1]=1;
    scanf("%d",&num);
    for(i=2;i<num;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(j=0;j<num;j++){
        printf("%d\n",arr[j]);
    }
    return 0;
}
