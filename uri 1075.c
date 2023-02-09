#include <stdio.h>  // declaring header file
int main() //main function
{
    int var,i ; // declare variable
    scanf("%d",&var); // taking input
    for(i=1; i<=10000; i++) // iterate numbers
    {
        if(i%var ==2) // check if the iterated var is divided by 2
        {
            printf("%d\n",i); // printing numbers
        }
    }
    return 0; //returning 0
}
