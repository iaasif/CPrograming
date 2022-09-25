//not solved

#include<stdio.h>
int main(){
    int i , x,y;
    scanf("%d %d",&x,&y);
    if(x<y){
        for(i=1;i<=y;i++){
            printf("%d %d %d\n",i,i+1,i+1);
        }
    }
    else{
                for(i=1;i<x;i++){
            printf("%d %d %d\n",i,i+1,i+1);
        }
    }
    return 0;
}
