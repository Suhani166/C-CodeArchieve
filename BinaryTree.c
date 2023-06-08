#include<stdio.h> 
#include<stdlib.h> 
struct node{  
   int data;  
   struct node *left, *right;  
};  
struct node *create(){  
   struct node *temp;  
   int choice,data;  
   temp = (struct node *)malloc(sizeof(struct node)); //newnode 
   printf("\nPress 0 to exit");  
   printf("\nPress 1 for new node");  
   printf("\nEnter your choice : ");  
   scanf("%d", &choice);   
   if(choice==0){  
      return 0;  
   }  
   else{  
      printf("Enter the data:");  
      scanf("%d", &data);  
      temp->data = data;  
      printf("Enter the left child of %d", data);  
      temp->left = create();  
      printf("Enter the right child of %d", data);  
      temp->right = create();  
      return temp;   
   }  
}  
void inorder(struct node* root){
   if(root){
      inorder(root->left);
      printf("%d\t",root->data);
      inorder(root->right);
   }
}
void preorder(struct node* root){
   if(root){
      printf("%d\t",root->data);
      preorder(root->left);
      preorder(root->right);
   }
}
void postorder(struct node* root){
   if(root){
      postorder(root->left);
      postorder(root->right);
      printf("%d\t",root->data);
   }
}
void insert(struct node* root, char direction[], int ele) { // assume root is already created and tree exists
    int i;
    struct node* temp,cur,parent;

    temp= getnode();
    temp->data=ele;
    temp->left=temp->right=NULL;

    parent = NULL;
    cur=root;
    i=0;
    while (cur && direction[i]) {//traverse down the tree
        parent = cur;
        if(direction[i]=='L' || direction[i]=='l')
            cur=cur->left;
        else
            cur=cur->right;
        i++;
    }
    if ((cur != NULL) || (direction[i]!='\0')) {   /*node already present at specified pos/incorrect dir string */
       printf("Insertion Not possible\n") ;3
    
       free(temp);
       return;
    }
    /*Based on last character of direction string  insert as a left or right child */
    if(direction[i-1]=='L' || direction[i-1]=='l')
            parent->left=temp;
    else
            parent->right=temp;
}

int search(struct node* root, int ele){
    static int t=0;
    if(root){
        if(root->data==ele){
            t++;
            return t;
        }
        if(t==0){
            search(root->left,ele);
        }
        if(t==0){
            search(root->right,ele);
        }
    }
}

struct node* copy (struct node* root){
	struct node* temp;
	if(root == NULL)
		return NULL;
	temp=getnode();
	temp->data=root->data;
	temp->left=copy(root->left);
	temp->right=copy(root->right);
	return temp;
}

int height (struct node* root)
{
	if(root==NULL)
		return 0;
	return( 1+ max(height (root->left), height(root->right)));
}
int max(int a, int b){
	if(a>b)
		return a;
	else
		return b;
}

int count_nodes( struct node* root)
{
    static int count = 0;
	if(root!=NULL)
	{
		count_nodes(root->left);
		count++;
		count_nodes(root->right);
	}
     return count;
}

int count_leafnodes( struct node* root)
{
    static int count = 0;
	if(root!=NULL)
	{
        if(root->left==NULL && root->right==NULL){
            count++;
        }
		count_leafnodes(root->left);
		count_leafnodes(root->right);
	}
     return count;
}

int Equal( struct node* root1, struct node* root2)
{
return ((!root1 && !root2) || (root1 && root2 && (root1->data == root2->data) && Equal( root1->left,root2->left) && Equal ( root1->right,root2->right)));
}

void main(){  
   struct node *root;  
   root = create(); 
   printf("\nPreorder Traversal is: ");
   preorder(root);
   printf("\nInorder Traversal is: ");
   inorder(root);
   printf("\nPostorder Traversal is: ");
   postorder(root);

}