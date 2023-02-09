
#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[] ="myFile.txt";
    fp = fopen(filename,"w");

    fprintf(fp,"this is a file created by my program! ");
    fprintf(fp,"I am not so happy\n");

    fclose(fp);

    fp =fopen(filename,"a");
    fprintf(fp,"second line.\n");
    fclose(fp);
    return 0;

}
