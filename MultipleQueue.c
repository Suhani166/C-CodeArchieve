#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queue[MAX], frontA = -1, rearA = -1, frontB = MAX, rearB = MAX;

void insertA(int value)
{
    if (rearA == rearB - 1)
    {
        printf("OVERFLOW\n");
    }
    else if (frontA == -1 && rearA == -1)
    {
        frontA = rearA = 0;
        queue[rearA] = value;
    }
    else
    {
        rearA++;
        queue[rearA] = value;
    }
}
void insertB(int value)
{
    if (rearB == rearA + 1)
    {
        printf("OVERFLOW\n");
    }
    else if (frontB == MAX && rearB == MAX)
    {
        frontB = rearB = MAX - 1;
        queue[rearB] = value;
    }
    else
    {
        rearB--;
        queue[rearB] = value;
    }
}
int deleteA()
{
    int val;
    if (frontA == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        val = queue[frontA];
        frontA++;
        if (frontA > rearA)
        {
            frontA = rearA = -1;
        }
    }
    return val;
}
int deleteB()
{
    int val;
    if (frontB == MAX && rearB == MAX)
    {
        printf("Underflow\n");
    }
    else
    {
        val = queue[frontB];
        frontA--;
        
        if (frontB < rearB)
        {
            frontB = rearB = MAX;
        }
    }
    return val;
}
void display_queueA()
{
    if (frontA == -1)
    {
        printf("\nQUEUE A IS EMPTY\n");
    }
    else
    {
        for (int i = frontA; i <= rearA; i++)
        {
            printf("\t %d", queue[i]);
        }
    }
}
void display_queueB()
{
    int i;
    if (frontB == MAX)
        printf("\n QUEUE B IS EMPTY");
    else
    {
        for (i = frontB; i >= rearB; i--)
            printf("\t %d", queue[i]);
    }
}
int main()
{
    int option, val;
    do
    {
        printf("\n *******MENU******");
        printf("\n 1. INSERT IN QUEUE A");
        printf("\n 2. INSERT IN QUEUE B");
        printf("\n 3. DELETE FROM QUEUE A");
        printf("\n 4. DELETE FROM QUEUE B");
        printf("\n 5. DISPLAY QUEUE A");
        printf("\n 6. DISPLAY QUEUE B");
        printf("\n 7. EXIT");
        printf("\n Enter your option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\n Enter the value to be inserted in Queue A : ");
            scanf("%d", &val);
            insertA(val);
            break;
        case 2:
            printf("\n Enter the value to be inserted in Queue B : ");
            scanf("%d", &val);
            insertB(val);
            break;
        case 3:
            val = deleteA();
            if (val != -1)
                printf("\n The value deleted from Queue A = %d", val);
            break;
        case 4:
            val = deleteB();
            if (val != -1)
                printf("\n The value deleted from Queue B = %d", val);
            break;
        case 5:
            printf("\n The contents of Queue A are : \n");
            display_queueA();
            break;
        case 6:
            printf("\n The contents of Queue B are : \n");
            display_queueB();
            break;
        }
    } while (option != 7);
}