#include<stdio.h>

int* smaller(int* x, int* y){
    if(*x < *y){
        return x;
    }
    else{
        return y;
    }
}
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    int *p;
    p = smaller(&a,&b);
    printf("Smaller of the 2 numbers is: %d",*p);
    return 0;
}