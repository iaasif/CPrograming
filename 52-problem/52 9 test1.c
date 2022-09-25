//52 book problem 9
#include<stdio.h>
#include<math.h>
int main()
{
    int t, i  ;
    double num;
    double sq_root ;

    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf",&num);

        sq_root=sqrt(num);
        if( sq_root * sq_root == num )
        {
            printf("YES\n");
        }
        else
            printf("NO\n");


    }
 return 0 ; }
