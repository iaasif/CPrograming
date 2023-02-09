#include<stdio.h>
int main()
{

    double x,y;
    double xPlusY, xMinusY;
    scanf("%lf %lf", &xPlusY, &xMinusY);

    x=((xPlusY+xMinusY)/2);
    y=((xPlusY-xMinusY)/2);

    printf("%lf %lf",x,y);
    return 0;
}
