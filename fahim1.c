#include<stdio.h>
int main()
{
    int i,j,n,c,d;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        c = n;
        d = 1;
        for(j=n;j>i;j--)
        {
            printf("\t");
        }
        for(j=1;j<i;j++)
        {
            printf("%d%d\t",c,d);
            --c;
            ++d;
        }
        printf("\n");
    }
}


//5
//
//		 	    51
//		    51	42
//	    51	42	33
//  51	42	33	24
//
