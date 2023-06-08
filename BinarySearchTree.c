#include<stdio.h>
#include<malloc.h>
#include<conio.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node*tree;

void create(struct node* tree){
    tree = NULL;
}

struct node* insertnode(struct node* tree, int val){
    struct node *ptr, *nodeptr , *parentptr;
    ptr= (struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    ptr->left=NULL;
    ptr->right=NULL;
    if(tree==NULL){
        tree=ptr;
        tree->left=NULL;
        tree->right=NULL;
    }
    else{
        parentptr = NULL;
        nodeptr = tree;
        while(nodeptr!=NULL){
            parentptr = nodeptr;
            if(val==nodeptr->data){
                printf("Duplicates not allowed!\n");
                free(ptr);
                break;
            }
            else if(val < nodeptr->data){
                nodeptr= nodeptr->left;
            }
            else{
                nodeptr=nodeptr->right;
            }
        }
        if(val < parentptr->data){
            parentptr->left = ptr;
        }
        else{
            parentptr->right = ptr;
        }
    }
    return tree;
}

void preorderTraverse(struct node* tree){
    if(tree!=NULL){
        printf("%d\t", tree->data);
        preorderTraverse(tree->left);
        preorderTraverse(tree->right);
    }
}

void inorderTraverse(struct node* tree){
    if(tree!=NULL){
        inorderTraverse(tree->left);
        printf("%d\t", tree->data);
        inorderTraverse(tree->right);
    }
}

void postorderTraverse(struct node* tree){
    if(tree!=NULL){
        postorderTraverse(tree->left);
        postorderTraverse(tree->right);
        printf("%d\t", tree->data);
    }
}

struct node* smallest(struct node* tree){
    if( (tree==NULL) || (tree->left==NULL)){
        return tree;
    }
    else{
        smallest(tree->left);
    }
}

struct node* largest(struct node* tree){
    if( (tree==NULL) || (tree->right==NULL)){
        return tree;
    }
    else{
        largest(tree->right);
    }
}

struct  node* deleteNode(struct node *tree, int val){
   if(tree==NULL){
        printf("\n The tree is empty ");
        return(tree);
    }
    if(val<tree->data){
        tree->left=deleteNode(tree->left,val);
    }
    else if(val>tree->data){
        tree->right=deleteNode(tree->right,val);
    }
    else{
        if(tree->left==NULL){
            struct node* temp= tree->right;
            free(tree);
            return temp;
        }
        else if (tree->right == NULL) {
            struct node *temp = tree->left;
            free(tree);
            return temp;
        }
        // node with two children: Get the inorder successor (smallest in the right subtree)
        struct node* temp = smallest(tree->right);
 
        // Copy the inorder successor's content to this node
        tree->data = temp->data;
 
        // Delete the inorder successor
        tree->right = deleteNode(tree->right, temp->data);
    }
}


struct node *deleteTree(struct node *tree){
    if(tree!=NULL){
        deleteTree(tree->left);
        deleteTree(tree->right);
        free(tree);
    }
}

int totalNodes(struct node* tree){
    if(tree==NULL){
        return 0;
    }
    else{
        return (totalNodes(tree->left)+totalNodes(tree->right)+1);
    }
}
struct node * search(struct node* tree, int data){
    if(tree==NULL){
        return NULL;
    }
    if(data==tree->data){
        return tree;
    }
    else if(data<tree->data){
        return search(tree->left, data);
    }
    else{
        return search(tree->right, data);
    }
}
int main(){
    int option,val;
    struct node* ptr;
    create(tree);
    do{
        printf("\n ******MAIN MENU******* \n");
        printf("\n 1. Insert Element");
        printf("\n 2. Preorder Traversal");
        printf("\n 3. Inorder Traversal");
        printf("\n 4. Postorder Traversal");
        printf("\n 5. Find the smallest element");
        printf("\n 6. Find the largest element");
        printf("\n 7. Delete an element");
        printf("\n 8. Count the total number of nodes");
        printf("\n 9. Delete the tree");
        printf("\n 10. Exit");
        printf("\n\n Enter your option : ");
        scanf("%d", &option);
        switch(option){
            case 1:
            printf("\nEnter value of new node: ");
            scanf("%d",&val);
            tree= insertnode(tree,val);
            break;
            case 2:
            printf("\n The elements of the tree are : \n");
            preorderTraverse(tree);
            break;
            case 3:
            printf("\n The elements of the tree are : \n");
            inorderTraverse(tree);
            break;
            case 4:
            printf("\n The elements of the tree are : \n");
            postorderTraverse(tree);
            break;
            case 5:
            ptr = smallest(tree);
            printf("\n Smallest element is :%d",ptr->data);
            break;
            case 6:
            ptr = largest(tree);
            printf("\n Largest element is : %d", ptr->data);
            break;
            case 7:
            printf("\n Enter the element to be deleted : ");
            scanf("%d", &val);
            tree = deleteNode(tree, val);
            break;
            case 8:
            printf("\n Total no. of nodes = %d", totalNodes(tree));
            break;
            case 9:
            tree = deleteTree(tree);
            break;
        }
    }while(option!=10);
    return 0;
}