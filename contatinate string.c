#include <stdio.h>
int main()
{
    char a[30]="bangla",b[30]="desh";
    int len=6,i,j;
    for(i=len,j=0; b[j]!='\0'; i++,j++)
    {

        a[i]=b[j];
    }
    printf("%s",a);

}
