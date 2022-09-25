//full pyramid
#include<stdio.h> // include stdio.h

int main()
{
    int n;

    printf("Enter number of lines: ");
    scanf("%d", &n);

    printf("\n");
    for(int i = 1; i <= n; i++)
    {
        for(int space = 0; space <= n - i; space++)
        {
            printf("   ");
        }
        for(int j = 1; j <= i * 2 - 1; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
