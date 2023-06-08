#include<stdio.h>
int fib(int n){ //Recursion takes more time in this case
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    else
    return (fib(n-1)+fib(n-2));
}
int fibit(int n){
    int a=0; int b=1;//0 1 1 2 3 5 8 13 21
    for(int i=0;i<n-1;i++){
       b=a+b; //1+1=2
       a=b-a;//2-1=1
    }
    return a;
}
int main(){
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("%d\n",fib(num));
    printf("%d\t",fibit(num));
}