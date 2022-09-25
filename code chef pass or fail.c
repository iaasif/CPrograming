#include<stdio.h>
int main()
{
    int i, t,n,x,p,que,right,wrong;
    int right_number , wrong_answer , total_sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&x,&p);
        //que=n;
        right=x;
        //right_number=que*right;
        wrong_answer = n-x;
        wrong = (n-x)*(-1);

        total_sum = (n*(x*3));
        if(total_sum>=p)
        {
            printf("pass");
        }
        else{printf("fail");}
    }
}
