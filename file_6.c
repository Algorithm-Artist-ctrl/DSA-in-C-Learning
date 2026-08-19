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

    fp = fopen("students.dat", "rb");

    fread(&s, sizeof(s), 1, fp);

    printf("Roll = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %d\n", s.marks);

    fclose(fp);

    return 0;
}