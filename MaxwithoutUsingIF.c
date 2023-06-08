//finding max without using nested if 
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter 2 numbers :\n");
    scanf("%d %d",&a,&b);
    int max= (a>b)*a + (b>a)*b;
    printf("Maximum number : %d\n",max);
    return 0;
}