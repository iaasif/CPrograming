#include <stdio.h>
int main()
{
    double a, b,c,s,m,l;
    double A,B,C;

    scanf("%lld %lld %lld",&a,&b,&c);
    if(a>b && a>c)
    {
        l=a;
        if(b>c)
        {
            m=b;
            s=c;
        }
        else
        {
            m=c;
            s=b;
        }
    }
    else if(b>a && b>c)
    {
        l=b;
        if(a>c)
        {
            m=a;
            s=c;
        }
        else
        {
            m=c;
            s=a;
        }
    }
    else if(c>a && c>b)
    {
        l=c;
        if(a>b)
        {
            m=a;
            s=b;

        }
        else
        {
            m=b;
            s=b;
        }
    }


    A=l;
    B=m;
    C=s;

    if(A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if( (A*A) = (B*B) + (C*C))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if( A*A > B*B + C*C)
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if( A*A < B*B + C*C)
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    else if ( A==B && B==C)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    else if ( A==B || B==C || A==C )
    {
        printf("TRIANGULO ISOSCELES\n");
    }


    return 0;
}
