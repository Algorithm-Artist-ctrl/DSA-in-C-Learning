#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("First.txt","w");
    fprintf(fp,"Hello world this is my First File handling");
    fputc('a',fp);
    fclose(fp);
    return 0;
}