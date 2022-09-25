#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pos,neg,odd,even,t,i;
    int num;

    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        cin>>num;

        if(num==0) printf("NULL\n");


        else
        {
            if(num%2==0)
            {
                if(num<0) printf("EVEN NEGATIVE\n");
                else printf("EVEN POSITIVE\n");
            }




            else
            {
                if(num<0) printf("ODD NEGATIVE\n");
                else printf ("ODD POSITIVE\n");
            }
        }
    }
    return 0;
}
