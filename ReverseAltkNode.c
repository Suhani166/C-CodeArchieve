 //Reverse alternate k nodes
#include<stdio.h>
#include<stdlib.h> 
  
struct node{  
    int data;  
    struct node* nxt;  
};  
  
struct node *kAltReversed(struct node *head, int k)  
{  
    struct node* curr = head;  
    struct node* nxt;  
    struct node* prevs = NULL;  
    int cnt = 0;  
  
    while (curr != NULL && cnt < k)  
    {  
    nxt = curr->nxt;  
    curr -> nxt = prevs;  
    prevs = curr;  
    curr = nxt;  
    cnt++;  
    }  
      
    if(head != NULL)  
    head -> nxt = curr;  
    cnt = 0;  
    while(cnt < k-1 && curr != NULL )  
    {  
    curr = curr -> nxt;  
    cnt++;  
    }  
  
    if(curr != NULL)  
    curr -> nxt = kAltReversed(curr -> nxt, k);  
  
    return prevs;  
}  
void push(struct node** headReference, int newInfo)  
{  
    struct node* newNode = (struct node*)malloc(sizeof(struct node));  
    newNode -> data = newInfo;  
    newNode -> nxt = (*headReference);     
    (*headReference) = newNode;  
}  
void printingList(struct node *node)  
{  
    int cnt = 0;  
    while(node != NULL)  
    {  
        printf("%d\t",node -> data);
        node = node -> nxt;  
        cnt++;  
    }  
}  
int main(void)  
{  
  
    struct node* head = NULL;  
    int index;  
      
    for(index = 20; index > 0; index--)  
    push(&head, index);  
  
    printf("Given linked list \n");  
    printingList(head);  
    head = kAltReversed(head, 3);  
  
    printf("\nModified Linked list \n");  
    printingList(head);  
    return(0);  
}  