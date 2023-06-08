#include<stdio.h>
#include<stdlib.h>
//top is equal to head
//EXAMPLE:- if elements pushed are 23 19 7 2 in that order, then
//according to stack printing order should be : 2 7 19 23
//so now top=head means 2 is the head node and the next of 23 that is the last node will point to null
//2-->7-->19-->23-->NULL
struct Node{
    int data;
    struct Node * next;
};
struct Node* top = NULL;

void push(int item){
    //creating a new node to insert the element
    struct Node * ptr;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data=item; //assigning value to the node

    if(top==NULL){ //checking if stack is empty or not
      ptr->next=NULL;
    }
    else{
        ptr->next=top; //making this node as top
    }
    top=ptr; //top always points to newly created node
    printf("Node is inserted.\n");
}
int pop(){
    if(top==NULL){
        printf("Empty stack\n");
    }
    else{
        //pointer is created which points to the top of the stack
        struct Node* temp=top;
        int temp_data=top->data;//popping element from top
        top=top->next;
        //2-->7-->19-->23-->NULL if this is the case then after top=top->next, 7 becomes top
        free(temp); //deleting the memory allocated
        return temp_data;
    }
}
void display(){
    if(top==NULL){
        printf("UNDERFLOW!! Nothing to print here...\n");
    }
    else{
        printf("THE STACK IS : \n");
        struct Node* temp=top; //it should print from top
        while(temp->next !=NULL){
            printf("%d ---> ",temp->data);
            temp = temp->next;
        }
        printf("%d ---> NULL\n\n", temp->data);
    }
}
int main()
{
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
    while (1) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
    return 0;
}