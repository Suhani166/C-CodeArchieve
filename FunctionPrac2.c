//Write a program that uses function digit(N,k) that return the value of the kth digit from the
//right of the number N. For eg. The function call digit (254693,2) should return 9.

#include<stdio.h>
int digit(int n, int k){
    int rem;
    while(k--){
        rem=n%10;
        n=n/10;
    }
    return rem;
}
int main()
{
    int n,k;
    printf("Enter a number and the index of the digit to be printed\n");
    scanf("%d %d",&n,&k);
    printf("The digit at %d index of %d is: %d\n",k,n,digit(n,k));

    return 0;
}