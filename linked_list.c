#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

typedef struct Node Node;

void create()
{
    Node *temp, *temp1;

    temp = (Node*)malloc(sizeof(Node));
    temp->next = NULL;

    printf("Enter the data: ");
    scanf("%d", &temp->data);

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp1 = head;

        while(temp1->next != NULL)
        {
            temp1 = temp1->next;
        }

        temp1->next = temp;
    }
}

void display()
{
    Node *temp;

    if(head == NULL)
        printf("Empty");
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1-> Create Node\n2-> Display\n3-> Exit\nEnter Your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
            create();
        else if(choice == 2)
            display();
        else if(choice == 3)
            break;
        else
            printf("Wrong choice");
    }

    return 0;
}
