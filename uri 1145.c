//uri 1145solved

#include<stdio.h>
int main(){
    int i , x,y;
    scanf("%d %d",&x,&y);
    if(x<y){
        for(i=1;i<y;i++){
            printf("%d %d %d\n",i,i+1,i+2);
            i=i+2;
        }
    }

    return 0;
}
