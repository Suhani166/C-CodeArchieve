#include<stdio.h>
int main(){
    int x=95;
    int*px,**ppx;
    px=&x;
    ppx= &px; //ppx is a pointer pointing to the pointer px
    printf("The value of x is : %d\n",x);
    printf("The value of x is : %d\n",*px);
    printf("The value of x is : %d\n",**ppx); //double dereferencing
    return 0;
}