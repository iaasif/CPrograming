#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[] ="myFile.txt";
    fp = fopen(filename,"w");

    fprintf(fp,"this is a file created by my program! ");
    fprintf(fp,"I am not so happy\n");
    fclose(fp); //closed here thats why not printed second line
    fprintf(fp,"second line.\n");
    return 0;

}
