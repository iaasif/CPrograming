#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//vul hoise pari nai
int main()
{
    int t ;


    char line[1000000];
    char *p, *e;
    long input;
    int count =0;

    scanf("%d",&t);
    for(int i =1 ; i<=t ; i++)
    {
        scanf("%s",&line);
        p=line;
        for(p=line ; ; p=e)
        {
            input = strtol(p,&e,10);
            if(p==e)
            {
                break;
            }
            count++;
        }
        printf("%d\n",count);
        return 0;

    }
}
