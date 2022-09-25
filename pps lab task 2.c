#include<stdio.h>
int main()
{
    double salary, incrementalValue,incrementedSalary,  newSalary ;   //declearing variable
    scanf("%lf",&salary); //taking input from user
    if(salary>0) //checking the input is correct
    {
        if(salary>0 && salary<=400.00) //checking the input
        {
            incrementalValue = 15; // put incremental percentage based on input
        }
        else if( salary>400.01 && salary<=800.00)
        {
            incrementalValue = 12;
        }
        else if(salary>=800.01 && salary<=1200.00)
        {
            incrementalValue= 10;
        }
        else if(salary>=1200.01 && salary<=2000.00)
        {
            incrementalValue= 7;
        }
        else if(salary>2000.00 )
        {
            incrementalValue= 4;
        }
    }
    else
    {
        printf("please enter a valid number\n");  // printing a value that is not correct
    }

    incrementedSalary = ((salary*incrementalValue)/100);  // calculate the value of incremented salary
    newSalary = salary + incrementedSalary ; // calculate new salary


    printf("New Salary: %.2lf\nMoney earned: %.2lf\nIn percentage: %.lf %%\n",newSalary,incrementedSalary,incrementalValue);
    //printing expected output

}
