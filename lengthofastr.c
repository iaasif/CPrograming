#include <stdio.h>
int main(){
    int i , len=0 ;
    char str[200];
    gets(str);
    for(i=0;str[i]!='\0';i++){
        len++;
    }
    printf("length of : %s is %d ",str,len);
}
