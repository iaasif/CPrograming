#include <stdio.h>  // declaring header file
int main() //main function
{
    int a,b,i,sum=0; // declare variable
    scanf("%d %d",&a,&b); // taking input
    if(a<b) // checking the input is greater than one
    {
        for(i=a; i<=b; i++) // iterate numbers
        {
            if(i%13 != 0) sum=sum+i; // check if the iterated var is not divided by 13 , sum =sum+i
        }
    }
    else // checking the input is greater than one
    {
        for(i=b; i<=a; i++) // iterate numbers
        {
            if(i%13 != 0) sum=sum+i; // check if the iterated var is not divided by 13 , sum =sum+i
        }
    }
    printf("%d\n",sum); // printing sum
    return 0; //returning 0
}
