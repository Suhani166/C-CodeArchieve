#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int rear = -1;
int front = -1;
int Queue[MAX];
void enqueue(int data)
{
    if (rear == MAX - 1)
    {
        printf("OVERFLOW!!\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    Queue[rear] = data;
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("UNDERFLOW!!\n");
    }
    else
    {
        printf("The element deleted from the queue is: %d\n", Queue[front]);
        front++;
    }
}
int main()
{
    int choice, data;
    while (1)
    {
        printf("\nEnter 1 to enqueue.\n");
        printf("Enter 2 to dequeue.\n");
        printf("Enter 3 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the element to be inserted: ");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            printf("Exiting...BYE!\n");
            exit(0);
        default:
            printf("Invalid input! Try again.. :)\n");
        }
    }
    return 0;
}