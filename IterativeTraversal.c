//iterative inorder traversal
void iterative_inorder(struct node* root){
    struct node* cur;
    bool done= false;
    STACK *s,s1;
    s=&s1;
    s->top=-1;    
    if(root==NULL){
        printf("Empty tree\n");
        return;
    }
    cur=root;
    while(!done){
        while(cur!=NULL){
            push(s,cur);
            cur=cur->left;
        }
        if(!isEmpty(s)){
            cur=pop(s);
            printf("%d\n",cur->data);
            cur=cur->right;
        }
        else{
            done=true;
        }
    }
}
void iterative_postorder(struct node* root){
    struct stack{
        struct node* Node;
        int flag;
    }
    struct node* cur;
    struct stack s[20];
    int top=-1;
    if(root==NULL){
        printf("Empty tree\n");
        return;
    }
    cur=root;
    for(;;){
        while(cur!=NULL){
            s[++top].Node=cur;
            s[top].flag=1;
            cur=cur->left;
        }
        while(s[top].flag<0){
            cur=s[top--].Node;
            printf("%d",cur->data);
            if(!isEmpty(s)){
                return;
            }
        }
        cur=s[top].Node;
        cur=cur->left;
        s[top].flag=-1;
    }
}
void iterative_preorder(struct node* root){
    STACK *s,s1;
    s=&s1;
    s->top=-1; 
    struct node* cur;
    if(root==NULL){
        printf("Empty tree\n");
        return;
    }
    push(s,root);
    while ((!isEmpty(s)))
    {
        cur=pop(s);
        printf("%d",cur->data);
        if(cur->right){
            push(s,cur->right);
        }
        if(cur->left){
            push(s,cur->left);
        }
    } 
}
void level_order(struct node* root){
    QUEUE *q,q1;
    q=&q1;
    q->front=-1;
    q->rear=-1;
    if(root==NULL){
        printf("Empty tree\n");
        return;
    }
    InsertQ(q,root);
    while(!isEmpty(q)){
        struct node* temp= deleteQ(q);
        printf("%d",temp->data);
        if(temp->left){
            InsertQ(q,temp->left);
        }
        if(temp->right){
            InsertQ(q,temp->right);
        }
    }
    
}