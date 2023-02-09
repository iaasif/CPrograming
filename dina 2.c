#include<stdio.h>
int main(){
    int n ,i ;

    for(i=1;i<=6;i++){

        printf("%d\n",i);
        if(i>1 && i<6){
                n=i*11;
                printf("%d\n",n);
        }
    }
}
