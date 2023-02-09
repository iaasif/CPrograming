#include <stdio.h>
int main(){
    char str1[]="bangla",str2[]="desh",str3[12];
    for(int i=0;i<=5;i++){
        str3[i]=str1[i];
    }
     printf("%s\n",str3);
    for(int i=6,j=0;i<=9,j<=3;i++,j++){
        str3[i]=str2[j];
    }
    printf("%s\n",str3);
    return 0;
}
