/* C Program to Implement operations in Threaded Binary Search Tree */
#include <stdio.h>
#include <stdlib.h>

typedef enum
{
    false,
    true
} boolean;

struct node *in_succ(struct node *p);
struct node *insert(struct node *root, int key);
void inorder(struct node *root);

struct node
{
    struct node *left;
    boolean lthread;
    int info;
    boolean rthread;
    struct node *right;
};

int main()
{
    int choice, num;
    struct node *root = NULL;
    while (1)
    {
        printf("\n");
        printf("1.Insert\n");
        printf("2.Inorder Traversal\n");
        printf("3.Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the number to be inserted : ");
            scanf("%d", &num);
            root = insert(root, num);
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            exit(1);

        default:
            printf("\nWrong choice\n");
        }
    }
    return 0;
}
struct node *insert(struct node *root, int key)
{
    struct node *tmp, *par, *ptr;
    int found = 0;
    ptr = root;
    par = NULL;
    // searching first because duplicates are not possible
    while (ptr != NULL)
    {
        if (key == ptr->info)
        {
            found = 1;
            break;
        }
        par = ptr;
        if (key < ptr->info)
        {
            if (ptr->lthread == false)
                ptr = ptr->left;
            else
                break;
        }
        else
        {
            if (ptr->rthread == false)
                ptr = ptr->right;
            else
                break;
        }
    }

    if (found)
        printf("\nDuplicate key");
    else
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->info = key;
        tmp->lthread = true;
        tmp->rthread = true;
        if (par == NULL)
        {
            root = tmp;
            tmp->left = NULL;
            tmp->right = NULL;
        }
        else if (key < par->info)
        {
            tmp->left = par->left;
            tmp->right = par;
            par->lthread = false;
            par->left = tmp;
        }
        else
        {
            tmp->left = par;
            tmp->right = par->right;
            par->rthread = false;
            par->right = tmp;
        }
    }
    return root;
}
struct node *in_succ(struct node *ptr)
{
    if (ptr->rthread == true)
        return ptr->right;
    else
    {
        ptr = ptr->right;
        while (ptr->lthread == false)
            ptr = ptr->left;
        return ptr;
    }
}

struct node *in_pred(struct node *ptr)
{
    if (ptr->lthread == true)
        return ptr->left;
    else
    {
        ptr = ptr->left;
        while (ptr->rthread == false)
            ptr = ptr->right;
        return ptr;
    }
}
void inorder(struct node *root)
{
    struct node *ptr;
    if (root == NULL)
    {
        printf("Tree is empty");
        return;
    }
    ptr = root;
    /*Find the leftmost node */
    while (ptr->lthread == false)
        ptr = ptr->left;

    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = in_succ(ptr);
    }
}
