#include <stdio.h>

struct Student
{
    int roll;
    char name[30];
    int marks;
};

int main()
{
    FILE *fp;
    struct Student s;

    fp = fopen("students.dat", "wb");

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);

    fclose(fp);

    printf("Data saved successfully.");

    return 0;
}