#include<stdio.h>
int fibo(int a){
    if(a==1){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{
        return (fibo(a-1)+fibo(a-2));
    }
}
int main()
{
    int arr[]={34,21,11,18,21,81,57,69,97,24};//n=10
    //to print nth fibo indexed number from array
    int n,index;
    printf("enter a number\n");
    scanf("%d",&n);
    index=fibo(n);
    printf("%d\n",arr[index]);
    return 0;
}