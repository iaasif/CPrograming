#include <stdio.h>
int main()
{

    char arr[100];
    while (NULL != gets(arr))
    {
        printf("%s",arr);
    }
    return 0;
}
