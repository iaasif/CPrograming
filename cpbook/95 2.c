#include <stdio.h>
int strLen(char str[])
{
    int i;
    int len=0;
    for( i=0; str[i]!='\0'; i++)
    {
        len++;
    }
    return len;
}

int main()
{

    char country[100];
    int len;
    while(1 == scanf("%s",country))
    {
        len=strLen(country);
        printf("length is : %d\n",len);
    }
    return 0;

}
