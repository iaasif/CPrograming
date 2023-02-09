#include <stdio.h>

int str_len(char str[])
{
    int i, len=0;
    for(i=0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}



int main()
{
    char country[100];
    int len ;
    while(1==scanf("%s",country))
    {
        len = str_len(country);
        printf("len: %d\n",len);
    }
    return 0;
}









