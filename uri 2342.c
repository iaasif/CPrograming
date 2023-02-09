// uri 2342 arekta ache




#include <stdio.h> //importing header library
int main() //calling main function
{
    int n1,n2,n3,r; //taking variable
    char ch; //taking variable

    scanf("%d",&n1); //input taking
    scanf(" %c",&ch); //input taking
    scanf("%d",&n2); //input taking
    scanf("%d",&n3); //input taking

    if(ch == 43  ch == 45  ch == 42 || ch == 47 ||ch == 37) //checking input is valid or not
    {
        switch(ch) //using switch
        {
        //43 means plus as per ascii table
        case 43:
            r=n1+n2;  //putting value in r (result)
            if(r==n3) // checking sum is equal to result
            {
                printf("OK\n"); // printing message that input n3 and r (result) is ok !
            }
            else if(n3<r) // checking sum is smaller to result
            {
                printf("Underflow\n"); // printing message that input and r (result) is Underflow !
            }
            else if(n3>r) // checking r (result) is greater then result
            {
                printf("Overflow\n"); // printing message that input and r (result) is Overflow !
            }

            break; // breaking the case
        //45 means plus as per ascii table
        case 45:
            r=n1-n2; //putting value in r (result)
            if(r==n3) // checking subtraction  is equal to result
            {
                printf("OK\n"); // printing message that input n3 and r (result) is ok !
            }
            else if(n3<r) // checking subtraction is smaller to result
            {
                printf("Underflow\n"); // printing message that input n3 and r (result) is Underflow !
            }
            else if(n3>r) // checking subtraction is greater then result
            {
                printf("Overflow\n"); // printing message that input n3 and r (result) is Overflow !
            }
            break; //ending the case


        //42 means multiplication as per ascii table
        case 42:
            r=n1*n2; //putting value in r (result)
            if(r==n3) // checking multiplication is equal to result
            {
                printf("OK\n"); // printing message that input and r (result) is ok !
            }
            else if(n3<r) // checking multiplication is smaller to result
            {
                printf("Underflow\n"); // printing message that multiplication and r (result) is Underflow !
            }
            else if(n3>r) // printing message that multiplication and r (result) is Overflow !
            {
                printf("Overflow\n"); // printing message that multiplication and r (result) is Overflow !
            }
            break; //ending the case


        //42 means division  as per ascii table
        case 47:
            r= n1/n2; //putting value in r (result)
            if(r==n3) // checking divided is equal to result
            {
                printf("OK\n"); // printing message that divided and r (result) is ok !
            }
            else if(n3<r)  // checking divided is smaller to result
            {
                printf("Underflow\n"); // printing message that divided and r (result) is Underflow !
            }
            else if(n3>r) // printing message that divided and r (result) is Overflow !
            {
                printf("Overflow\n"); // printing message that divided and r (result) is Overflow !
            }

            break; //ending the case

        //37 means modulus   as per ascii table
        case 37:
