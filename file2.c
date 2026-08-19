#include <stdio.h>

int main()
{
    FILE *fp;
    int roll, marks;
    char name[30];

    fp = fopen("First.txt", "w");

    printf("Enter roll number\n");
    scanf("%d", &roll);

    fprintf(fp, "Roll = %d\n", roll);

    printf("\nEnter Name\n");
    scanf(" %[^\n]", name);

    fprintf(fp, "Name = %s\n", name);

    printf("Enter Marks\n");
    scanf("%d", &marks);

    fprintf(fp, "MARKS = %d\n", marks);

    fclose(fp);

    return 0;
}