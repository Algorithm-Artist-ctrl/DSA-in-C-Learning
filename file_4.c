#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("student.dat", "w");

    fprintf(fp, "Roll = 10\n");
    fprintf(fp, "Name = Tarun\n");
    fprintf(fp, "Marks = 85\n");

    fclose(fp);

    return 0;
}