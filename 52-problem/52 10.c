#include<stdio.h>
int main(){
    int i , t ;
    float  run1 ,batsmanrun1,bal;
    float over=6;
    float runrate;
    float expected_runrate;

    scanf("%f",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f %f %f",&run1 ,&batsmanrun1,&bal);


        float bal_played = 300-bal;

        runrate = (batsmanrun1/bal_played)*over;

        expected_runrate=(((run1+1)-batsmanrun1)/bal)*over;
        printf("%.2f %.2f\n",runrate,expected_runrate);
    }
return 0;
}
