
//solved
#include <stdio.h>

int fun(char x)
{

        if(x>=48 && x<=57){
            return 1;
        }
        else return 0;

}

int main() {
    char a;
    scanf("%c",&a);
    int num = fun(a);
    printf("%d",num);
    return 0;
}
