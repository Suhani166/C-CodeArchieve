#include<stdio.h>
#include<stdlib.h>
//STACK- Abstract data type
//stack-LIFO(last in first out)
//stack using arrays and pointers
//Time complexity of all the functions is O(1)
 
struct stack{
    int size;
    int top;
    int* arr;
};

int isEmpty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack* ptr){
    if(ptr->top == (ptr->size-1)){
        return 1;
    }
    else{
        return 0;
    }
}
int peek(struct stack* ptr, int i) 
{
    //since index entered will start from 1 and array indexing is from 0
    //we use the formula top-i+1 to get the desired value
    int arrayInd=ptr->top-i+1;
    if(arrayInd<0){
        printf("\nNot a valid position\n");
        return -1;
    }
    else{
        return (ptr->arr[arrayInd]); //returning value at thr given index
    }
}

void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("\nStack Overflow! Cannot push %d to the stack\n",val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
}
int pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("\nStack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        int temp= ptr->arr[ptr->top];
        ptr->top--;
        return temp;
    }
}

int main()
{
    struct stack *sp=(struct stack *)malloc(sizeof(struct stack));//creating instance of stack
    //printf("Enter the size of stack\n");
    //scanf("%d",sp->size);
    sp->size=10;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));
    printf("\nBefore pushing,Full: %d\n",isFull(sp));
    printf("Before pushing,Empty: %d\n",isEmpty(sp));
    //pushing elements into the stack
    push(sp,20);
    push(sp,45);
    push(sp,6);
    push(sp,82);
    push(sp,19);
    push(sp,37);
    push(sp,52);
    push(sp,69);
    push(sp,77);
    push(sp,15);
    push(sp,1);//OVERFLOW..Doesn't get pushed into the stack
    printf("\nAfter pushing,Full: %d\n",isFull(sp));
    printf("After pushing,Empty: %d\n",isEmpty(sp));
    printf("\nBefore popping,Full: %d\n",isFull(sp));
    printf("Before popping,Empty: %d\n",isEmpty(sp));
    printf("\nPeeking..\n");
    for(int j=1;j<=sp->top+1;j++){
        printf("Value at %d index is: %d\n",j,peek(sp,j));
    }
    //Popping
    printf("\nPopped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));
    printf("Popped %d from the stack\n",pop(sp));//Underflow..no element popped
    printf("\nAfter popping,Full: %d\n",isFull(sp));
    printf("After popping,Empty: %d\n",isEmpty(sp));

    return 0;
}