#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    switch(x>y && x>z)
    {
    case 1:
        printf("x is large");
        break ;
    case 0:
        switch(y>x && y>z)
        {
        case 1:
            printf("Y is larger");
            break ;
        case 0:
            printf("Z is large");
            break ;
        }
    }
return 0;
}
