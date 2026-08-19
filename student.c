#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    int marks;
    char name[30];
};

struct student s;

void add()
{
    FILE *fp;

    fp = fopen("Student.dat", "ab");
    int n ;
    printf("Enter the Number of students\n");
    scanf("%d",&n);
    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return;
    }
   for (int i = 0; i < n; i++)
    {
        printf("\nEnter Roll: ");
        scanf("%d", &s.roll);

        getchar();   // leftover '\n' remove karega

        printf("Enter Name: ");
        fgets(s.name, sizeof(s.name), stdin);

        printf("Enter Marks: ");
        scanf("%d", &s.marks);

        fwrite(&s, sizeof(s), 1, fp);
    }


    printf("Student added successfully!\n");
}
void display()
{
    FILE *fp;

    fp = fopen("Student.dat", "rb");

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("\nRoll  : %d", s.roll);
        printf("\nName  : %s", s.name);
        printf("Marks : %d\n", s.marks);
    }
    fclose(fp);
}
void search()
{
    FILE *fp;

    fp = fopen("Student.dat", "rb");
    int SearchRoll;
    printf("Enter Roll to search student\n");
    scanf("%d",&SearchRoll);

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if(SearchRoll==s.roll)
        {
            printf("\nRoll  : %d", s.roll);
            printf("\nName  : %s", s.name);
            printf("Marks : %d\n", s.marks);
        }
    }
    fclose(fp);
}

void search_2()
{
    FILE *fp;
    char searchName[30];

    fp = fopen("Student.dat", "rb");

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return;
    }

    printf("Enter NAME: ");
    scanf(" %[^\n]", searchName);

    printf("\n--- Student Records ---\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        // fgets() se stored newline problem avoid karne ke liye
        s.name[strcspn(s.name, "\n")] = '\0';

        if (strcmp(s.name, searchName) == 0)
        {
            printf("\nRoll  : %d", s.roll);
            printf("\nName  : %s\n", s.name);
            printf("\nMarks : %d\n", s.marks);
        }
    }

    fclose(fp);
}
void update(){
     FILE *fp;

    fp = fopen("Student.dat", "rb+");
    int SearchRoll;
    printf("Enter Roll to search student\n");
    scanf("%d",&SearchRoll);

    if (fp == NULL)
    {
        printf("File cannot be opened!\n");
        return;
    }

    printf("\n--- Student Records ---\n");

    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        if(SearchRoll==s.roll)
        {
            printf("Enter marks to update\n");
            scanf("%d",&s.marks);
            fseek(fp,-sizeof(s),SEEK_CUR);
            fwrite(&s,sizeof(s),1,fp);
            break;
        }
    }
    fclose(fp);
}
int main()
{
    int n;

    while (1)
    {
        printf("\n========== STUDENT MANAGEMENT SYSTEM ==========\n");
        printf("1 -> Add Student Details\n");
        printf("2 -> Display Student Records\n");
        printf("3 -> Search Student\n");
        printf("4 -> Update Student Marks\n");
        printf("5 -> Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &n);

        switch (n)
        {
            case 1:
                add();
                break;

            case 2:
                display();
                break;

            case 3:
                search_2();
                break;

            case 4:
                update();
                break;

            case 5:
                printf("Program exited successfully!\n");
                return 0;

            default:
                printf("Invalid choice! Please enter 1 to 5.\n");
        }
    }
}