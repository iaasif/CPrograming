#include<stdio.h>
int main()
{
    int arr[10]= {1000000000,23,32,41,59,628,7523,821,921,1043,112};
    int i, j, k=2;
    char a ;
    int count=0;
    while (k>0)
    {
        //printf("%d\n",arr[count]);
        //printf("enter l or R \t");
        scanf("%c",&a);
        if(a==108)
        {

            if(count<=10)
            {
                printf("%d\n",arr[count]);
                count++;
            }
            else if(count)
            count++;
            printf("%d\n",arr[count]);
        }
        /*else
        {
            count++;
            printf("%d\n",arr[count]);
        } */
    }
    return 0;
}
