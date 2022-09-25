//not solved
#include<stdio.h>
int main()
{

    int t, i,count=0;
        char fritst_line[10001],second_line[2];

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%[^\n]", first_line);
        scanf("%s",second_line);


        for(int j=0; j<strlen(first_line); i++)
        {
            if(second_line[0]==fritst_line[i])
            {
                count++;
            }
        }


    }
}
