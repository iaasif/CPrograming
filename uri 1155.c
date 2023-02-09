#include <stdio.h>
int main(){
    double n ,i, s=1;
    for(i=2;i<=100;i++){
        n=1/i;
        s=n+s;
    }
    printf("%.2lf\n",s);
    return 0;
}
