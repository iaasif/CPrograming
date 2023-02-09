

#include <stdio.h>
int main()
{
    FILE *fp;
    char filename[] ="in.text";
    fp = fopen(filename,"w");

    fprintf(fp,"12\n");
    fprintf(fp,"5");

    fclose(fp);

    return 0;

}
