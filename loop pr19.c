//diamond pattern
#include<stdio.h>
int main()
{
    int row, col, i, num;
    scanf("%d",&num);
    for(row=1; row<=num; row++ )
    {
        for(col=1; col<=num-row; col++)
            printf(" ");
        for(col=1; col<=2*row-1; col++)
            printf("*");
        printf("\n");
        //half diamond is done here
        //int row2, col2;



    }
    for(row=num-1; row<=0; row--)
        for(col=1; col<=row; col++)
            printf(" ");
        for(col=1; col<=2*row-1; col++)
        printf("*");
    printf("\n");

}
