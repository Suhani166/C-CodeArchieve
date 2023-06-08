#include<stdio.h>
#include<stdlib.h>
int quiz(int* a, int* b){
    int temp = *a;
    *a= *a + *b;
    *b = abs(temp - *b);
    return 0;
}
int main()
{ 
    int a,b;
    printf("Enter 2 Values\n");
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
    quiz(&a,&b);
    printf("the sum and difference of the two values respectively is\n");
    printf("%d %d\n",a,b);
    return 0;
}
