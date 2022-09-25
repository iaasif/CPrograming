

 #include<stdio.h>
 int main(){
    int arr[10],i , num;
    scanf("%d",&num);
    arr[0]=num;
    for(i=1;i<10;i++){
        arr[i]=arr[i-1]*2;
    }
    for(i=0;i<10;i++){
        printf("N[%d] = %d\n",i,arr[i]);
    }
    return 0;
 }
