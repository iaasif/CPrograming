#include<stdio.h>
int main()
{
    int i,a;
    char x;
    a=97;
    x='a';
    for(i=1; i<=26; i++)
    {
        printf("%d e %c\n",a,x);
        ++a;
        ++x;
    }
    return 0;
}
