#include<stdio.h>
int main()
{
    int i , rem , sum=0 , num , mul=0;


    scanf("%d",&num);

    while(num !=0)
    {
        rem = num %10;
        sum = sum + rem;
        mul = mul * rem;
        num = num/10;
       num --;


    }
    if (sum == mul) printf("perfect");
    else printf("not perfect");




          /*while($number != 0){
 $rem = $number % 10;
 $sum = $sum + $rem;
 $mul = $mul * $rem;
 $number = (int)($number / 10);
}*/
}
