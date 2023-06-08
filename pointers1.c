#include<stdio.h>
int add(int* a, int* b){
    int sum = *a + *b;
}
int multiply(int* a, int* b){
    int product = *a * *b;
}
int main()
{
    int a,b;
    printf("Enter the two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The sum is : %d\nThe product is : %d\n",add(&a,&b),multiply(&a,&b));
    return 0;
}