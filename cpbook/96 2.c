
#include <stdio.h>
int strLen(char str[])
{
    int i=0;
    //int len=0;
    while(str[i]!='\0') i++;


    return i;
}

int main()
{

    char country[6];
    int len;
    while(1 == scanf("%s",country))
    {
        len=strLen(country);
        printf("length is : %d\n",len);
    }
    return 0;

}
