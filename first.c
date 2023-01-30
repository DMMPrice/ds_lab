// insertion in the linked list
#include <stdio.h>
#include <stdlib.h>
// Creating the structure of the node
struct node
{
    int data;
    struct node *next;
};

struct node *head;
void beginInsert();
void randomInsert();
void randomDelete();
void display();
void main()
{
    int choice = 0;
    while (choice != 5)
    {
        printf("\n\n**************Main Menu**************\n\n");
        printf("\nChoose one option from the following list ....\n");
        printf("\n===============================================\n");
        printf("\n1. Insertion of an element in the beginning.");
        printf("\n2. Insertion of an element in the random area.");
        printf("\n3. Display the list.");
        printf("\n4. Exit.");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            beginInsert();
            break;
        case 2:
            randomInsert();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting....");
            exit(0);
            break;
        default:
            printf("Please Enter a Valid Choice.....");
        }
    }
}
void beginInsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        printf("\nEnter the value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode Inserted");
    }
}
void randomInsert()
{
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter the element value: ");
        scanf("%d", &item);
        ptr->data = item;
        printf("\nEnter the location after which you want to insert: ");
        scanf("%d", &loc);
        temp = head;
        for (i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("\n Can't Insert.");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("\nNode Inserted");
    }
}
void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Nothing to print");
    }
    else
    {
        printf("\nPrinting Values ......\n");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}