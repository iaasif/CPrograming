#include<stdio.h>
int main()
{
    float i,j;
    i=0;
    j=1;
      while(i<=2)
    {
        printf("I=%.1f J=%.1f\n",i,j);
        j=j+1;
        printf("I=%.1f J=%.1f\n",i,j);
        j=j+1;
        printf("I=%.1f J=%.1f\n",i,j);

        i=i+0.2;
        j=j+i;

    }
}
