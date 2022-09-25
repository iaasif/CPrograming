#include<stdio.h>
int main()
{

    int per[3];
    int i ;
    int sum=0;
    printf("enter 4 numbers\n");
    for (i=0; i<3; i++)
    {

        scanf("%d",&per[i]);

    }
    for(i=0; i<3; i++)

    {
        // printf("%d\n",per[i]);
        sum = sum + per[i];
    }
    printf("%d",sum);

}
