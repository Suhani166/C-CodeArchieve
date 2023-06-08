#include<stdio.h>
#include<stdlib.h>

struct node
{
    int coeff;
    int exp;
    struct node* next;
};

struct node* create(struct node* head,int coeff,int exp){
    struct node* temp,*flag;
    //if poly is empty, make the node=head node
    if(head==NULL){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->coeff=coeff;
        temp->exp=exp;
        temp->next=NULL;
        head=temp;
    }
    else{
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        flag=(struct node*)malloc(sizeof(struct node));
        flag->coeff=coeff;
        flag->exp=exp;
        flag->next=NULL;
        temp->next=flag;
    }
    return head;
}

struct node* polyAdd(struct node* p1,struct node* p2,struct node* sum){
    struct node* poly1=p1,*poly2 =p2,*res;
    //if poly2 is null then answer=poly1
    if(poly1!=NULL && poly2==NULL){
        sum=poly1;
        return sum;
    }
    //if poly1 is null then answer=poly2
    else if(poly1==NULL && poly2!=NULL){
        sum=poly2;
        return sum;
    }
    while(poly1!=NULL && poly2!=NULL){
        
        if(sum==NULL){
            sum=(struct node*)malloc(sizeof(struct node));
            res=sum;
        }
        else{
            res->next=(struct node*)malloc(sizeof(struct node));
            res = res->next;
        }
        if(poly1->exp > poly2->exp){
            res->coeff= poly1->coeff;
            res->exp = poly1->exp;
            poly1=poly1->next;
        }
        else if(poly1->exp < poly2->exp){
            res->coeff= poly2->coeff;
            res->exp = poly2->exp;
            poly2=poly2->next;
        }
        else if(poly1->exp == poly2->exp){
            res->coeff= poly1->coeff +poly2->coeff;
            res->exp = poly1->exp;
            poly1=poly1->next;
            poly2=poly2->next;
        }
    }
    while(poly1!=NULL){
        res->next=(struct node*)malloc(sizeof(struct node));
        res=res->next;
        res->coeff= poly1->coeff;
        res->exp = poly1->exp;
        poly1=poly1->next;
    }
    while(poly2!=NULL){
        res->next=(struct node*)malloc(sizeof(struct node));
        res=res->next;
        res->coeff= poly2->coeff;
        res->exp = poly2->exp;
        poly2=poly2->next;
    }
    res->next=NULL;
    return sum;
}

void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d x^%d + ", temp->coeff,temp->exp);
        temp=temp->next;
    }
    printf("\n");
}

void main(){
    struct node* p1=NULL,*p2=NULL,*sum=NULL;
    int ch,co,exp;
    int loop=1;
    while(loop){
        printf("1. Enter polynomial 1\n");
        printf("2. Enter polynomial 2\n");
        printf("3. Perform Addition.\n");
        printf("4. EXIT.\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("\nEnter coefficient: ");
            scanf("%d",&co);
            printf("\nEnter exponent: ");
            scanf("%d",&exp);
            p1= create(p1,co,exp);
            break;
            case 2:
            printf("\nEnter coefficient: ");
            scanf("%d",&co);
            printf("\nEnter exponent: ");
            scanf("%d",&exp);
            p2= create(p2,co,exp);
            break;
            case 3:
            sum=polyAdd(p1,p2,sum);
            printf("\nPolynomial 1\n");
            display(p1);
            printf("\nPolynomial 2\n");
            display(p2);
            printf("\nThe sum is: ");
            display(sum);
            break;
            case 4:
            loop=0;
            break;
            default:
            printf("Invalid Input. Try again.\n");
        }
    }
}
