#include <stdio.h>
int main()
{
    FILE *fp ;
    char fileName[] = "thisIsName.txt";

    fp = fopen(fileName,"w");

    fprintf(fp,"this is a file i created by program");
    fprintf(fp,"\nthis is second line. thank you");
    fclose(fp);

    fp = fopen(fileName,"w");
    fprintf(fp,"\nthird line");
    fclose(fp);

    return 0;


}
