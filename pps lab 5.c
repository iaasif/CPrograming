#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    switch(a){
    case 1:
        printf("one");
        break ;
    case 2:
        printf("Two");
        break ;
    case 3:
        printf("Three");
        break ;
    case 4:
        printf("Four");
        break ;
    case 5:
        printf("Five");
        break ;
    default:
        printf("out of range\n");
    }
    return 0;
}
