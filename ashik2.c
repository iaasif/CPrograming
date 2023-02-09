#include<stdio.h>
int main()
{
    int arr[5]= {1,23,32,41,59};
    int i, j, k=20;
    char a ;
    int count=0;
    printf("%d\n",arr[0]);
    while (1)
    {
        scanf("%c",&a);
        if(a=='r')
        {
            if(count>=4)
            {
                count=-1;
            }
            count++;
            printf("%d\t %d\n",arr[count],count);
        }
        else if(a=='l')
        {
            if(count<0)
            {
                count=4;
            }
            printf("%d\t %d\n",arr[count],count);
            count--;
        }
    }
    return 0;
}
