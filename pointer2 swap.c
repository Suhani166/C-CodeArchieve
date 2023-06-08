#include<stdio.h>
void swap(int a, int b){ //this code doesn't swap the values
    int temp=a;
    a=b;
    b=temp;
}
void swapbyptr(int* a, int* b){//works!
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int m=2,n=3;
    printf("Before swapping\n");
    printf("Value of m: %d and Value of n: %d\n",m,n);
    swap(m,n);
    printf("Swap using call by value\n");
    printf("Value of m: %d and Value of n: %d\n",m,n);//Values of m and n remain same
    swapbyptr(&m,&n);
    printf("Swap using call by refernce\n");
    printf("Value of m: %d and Value of n: %d\n",m,n);//swapped values printed
    
    return 0;
}