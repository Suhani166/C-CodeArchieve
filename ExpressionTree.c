// C program to construct an expression tree
// from prefix expression
#include <stdio.h>
#include <stdlib.h>

// Represents a node of the required tree
typedef struct node {
	char data;
	struct node *left, *right;
} node;

// Function to recursively build the expression tree
char* add(node** p, char* a)
{
	// If its the end of the expression
	if (*a == '\0')
		return '\0';
	while (1) {
		char* q = "null";
		if (*p == NULL) {

			// Create a node with *a as the data and
			// both the children set to null
			node* new = (node*)malloc(sizeof(node));
			new->data = *a;
			new->left = NULL;
			new->right = NULL;
			*p = new;
		}
		else {
			// If the character is an operand
			if (*a >= 'a' && *a <= 'z') {
				return a;
			}
			// Build the left sub-tree
			q = add(&(*p)->left, a + 1);
			// Build the right sub-tree
			q = add(&(*p)->right, q + 1);
			return q;
		}
	}
}
// Function to print the infix expression for the tree
void inorder(node* p) // recursion
{
	if (p == NULL) {
		return;
	}
	else {
		inorder(p->left);
		printf("%c ", p->data);
		inorder(p->right);
	}
}

// Function to print the postfix expression for the tree
void postorder(node* p)
{
	if (p == NULL) {
		return;
	}
	else {
		postorder(p->left);
		postorder(p->right);
		printf("%c ", p->data);
	}
}

// Driver code
int main()
{
	node* s = NULL;
	char a[] = "*+ab-cd";
	add(&s, a);
	printf("The Infix expression is:\n ");
	inorder(s);
	printf("\n");
	printf("The Postfix expression is:\n ");
	postorder(s);
	return 0;
}
