#include <stdio.h>
#include <conio.h>
int n, choice, i, x, f = -1, r = -1, q[100];
void enqueue()
{
    if (r == n - 1)
    {
        printf("Queue is overflow:\n");
    }
    else
    {
        if (f == -1)
        {
            f = 0;
        }
        printf("Enter the element you want to insert:");
        scanf("%d", &x);
        r++;
        q[r] = x;
    }
}
void dequeue()
{
    if (f == -1 || f > r)
    {
        printf("Queue is underflow:\n");
    }
    else
    {
        printf("Deleted element is: %d", q[f]);
        f++;
    }
}
void display()
{
    printf("Elements inside the queue are:");
    for (i = f; i <= r; i++)
    {
        printf("%d\t", q[i]);
    }
}
void main()
{
    printf("---------------------------------------\n");
    printf("WELCOME TO QUEUE OPERATION USING ARRAY:\n");
    printf("---------------------------------------\n");
    printf("Enter how many elements you want to enter in the queue:");
    scanf("%d", &n);
    printf("1.Enqueue:\t2.Dequeue:\t3.Display:\t4.Exit:");
    while (choice != 5)
    {
        printf("\nEnter the choice given:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("User Exited the switch case:\n");
            printf("Have a nice day:");
            break;
        default:
            printf("Please enter the correct choice:");
            break;
        }
    }
    getch();
}
