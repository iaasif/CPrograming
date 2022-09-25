/*
   * 	    //row=1 col=1 t=4   new row=2
  ***       //row=2 col=1 t=4   new row =3
 *****	    //row=3 col=1 t=4   new row =4
*******
*/

#include<stdio.h>
int main()
{
    int row, col ,t,i ;
    scanf("%d",&t);
    for(row=1;row<=t;row++) //test case
    {
        for(col=1;col<=t-row;col++) //printing space
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++) //printing star
        {
            printf("*");
        }
        printf("\n"); //new line
    }

}
