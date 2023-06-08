//Write a program to find sum, average of two numbers passed to user defined functions
//called sum(int,int) and average(int,int).
#include<stdio.h>
int sum(int a,int b){
    return (a+b);
}
double average(int a, int b){
    double avg= (a+b)/2.0;
    return avg;
}
int main()
{
    int m,n;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&m,&n);
    printf("The sum of the numbers is: %d\n", sum(m,n));
    printf("The average of the number is: %.2lf\n", average(m,n));
    return 0;
}