#include <stdio.h>

int main()
{
    FILE *fp;

    int roll, marks;
    char name[30];

    fp = fopen("student.dat", "r");

    fscanf(fp, "%d %s %d", &roll, name, &marks);

    printf("Roll = %d\n", roll);
    printf("Name = %s\n", name);
    printf("Marks = %d\n", marks);

    fclose(fp);

    return 0;
}