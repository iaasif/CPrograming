// C program to illustrate not using "&"
// in scanf statement
#include<stdio.h>
int main()
{
	char name[25];

	// Syntax to scan a String
	scanf("%s", name);

	// Comparing base address of String with address
	// of first element of array which must return
	// true as both must be same
	printf("(Is Base address = address of first element)? \n %d",
		(name == &name[0]));

}
