#include<stdio.h>
int main(){
    int i , num ;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d %d %d", i , i*i , i*i*i);
        printf("%d %d %d", i , i*i+1 , i*i*i+1);
        
    }
}