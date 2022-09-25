#include<stdio.h>
int main()
{
    int marks ; // declare a variable
    printf("Enter marks:"); // printing a message
    scanf("%d",&marks); // taking input from user
    if(marks>=0 && marks<=100) //checking the input is correct or not
    {
        if(marks>=80 && marks<=100) //checking the input using conditional statement
        {
            printf("A+\n"); //printing the expected output from input
        }
        else if(marks>=70 && marks<=79)
        {
            printf("A\n");
        }
        else if(marks>=60 && marks<=69)
        {
            printf("A-\n");
        }
        else if(marks>=50 && marks<=59)
        {
            printf("B\n");
        }
        else if(marks>=40 && marks<=49)
        {
            printf("C\n");
        }
        else
        {
            printf("F\n");
        }
    }
    else
    {
        printf("Please try again and enter a valid number\n"); //printing a message that input is not valid
    }

    return 0;
}
